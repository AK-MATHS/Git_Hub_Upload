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
    if (str != nullptr) {
        delete [] str;
    }
}




//Display method
void Mystring::display() const {
    std::cout << str << " :" << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const {return std::strlen(str);}

//string getter
const char *Mystring::get_str() const {return str; }



// Challenge begins
//%%%%%%%%%%%%%%%%%%


//Operator_Overloading
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    if (str!=nullptr){
        delete [] str;
    }
    str = rhs.str;
    
    rhs.str = nullptr;
    
    return *this;
    
    
/*
    size_t buff_size = std::strlen(rhs.str) + 1;
    char *buff = new char [buff_size];
    std::strcpy(buff, rhs.str);
    Mystring temp {buff};
    delete[] buff;
    return temp;
}
*******/
}


//Mystring operator- () const;
//Make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i=0; i<std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}



//bool operator== (const Mystring &rhs) const;
//Equality
bool Mystring::operator== (const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}


//bool operator!= (const Mystring &rhs) const;
//Non-equality
bool Mystring::operator!= (const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) != 0);
}

//bool operator< (const Mystring &rhs) const;
//less-than
bool Mystring::operator< (const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

//bool operator> (const Mystring &rhs) const;
//greater-than
bool Mystring::operator> (const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}


//Mystring operator+ (const Mystring &rhs) const;
//concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
        size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1;
        char *buff = new char [buff_size];
        std::strcpy(buff, str);
        std::strcat(buff, rhs.str);
        Mystring temp {buff};
        delete[] buff;
        return temp;
    }



//Mystring operator+= (const Mystring &rhs);
Mystring Mystring::operator+= (const Mystring &rhs) {
    size_t buff_size = std::strlen(this->str) + std::strlen(rhs.str) + 1;
    char *buff = new char [buff_size];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    str = buff;
    delete [] buff;
    return str;
}

//////////////////////OOOOOOOOOOOthersssssssssssssssss/////////////////////

\








//Mystring operator* (const Mystring &rhs);
Mystring Mystring::operator* (const size_t &rhs) {
    size_t buff_size = ((std::strlen(str) * rhs) + 1);
    char *buff = new char [buff_size];
    std::strcpy(buff, str);
    
    for (int i=0; i < rhs-1; i++) {
        std::strcat(buff, str);
    }
//    Mystring temp{buff};
//    delete [] buff;
    
//    return temp;
    
    delete [] str;
    str = buff;
    return *this;
}
    


//Mystring operator*= (const Mystring &rhs);
Mystring Mystring::operator*= (const size_t &rhs) {
    size_t buff_size = ((std::strlen(str) * rhs) + 1);
    char *buff = new char [buff_size];
    std::strcpy(buff, str);
    
    for (int i=0; i < rhs-1; i++) {
        std::strcat(buff, str);
    }

    delete [] str;    
    str = buff;
//    delete [] buff;
    
    return str;
}


//Mystring &operator++ ();

//Mystring operator++ (int);
    
    
//std::ostream &operator<< (std::ostream &os, const Mystring &rhs);
//std::istream &operator>> (std::istream&is, Mystring &rhs);

  
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
