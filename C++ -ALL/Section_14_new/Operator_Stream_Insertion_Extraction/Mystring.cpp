#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
    }

//Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    }


//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str) {
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
    }
    
Mystring::~Mystring(){
    delete [] str;
}

//Operator_Overloading
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    
    rhs.str = nullptr;
    
    return *this;
}


//Display method
void Mystring::display() const {
    std::cout << str << " :" << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const {return std::strlen(str);}

//string getter
const char *Mystring::get_str() const {return str; }

/*
//Equality
bool operator== (const Mystring &lhs, const Mystring &rhs) {
    return(std::strcmp(lhs.str, rhs.str) == 0);
}

//Make lowercase
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i=0; i<std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//concatenate
Mystring operator+(const Mystring &lhs, const Mystring &rhs)  {
        size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
        char *buff = new char [buff_size];
        std::strcpy(buff, lhs.str);
        std::strcat(buff, rhs.str);
        Mystring temp {buff};
        delete[] buff;
        return temp;
    }

 */

  
//overloaded insertion operator
std::ostream &operator<< (std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

//overloaded extractio operator
std::istream &operator>> (std::istream &is, Mystring &rhs) {
    char *buff = new char[100];
    is >> buff;
    rhs = Mystring {buff}; //if you have a copy or move assignment
    
    delete [] buff;
    return is;
}