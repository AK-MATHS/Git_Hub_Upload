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

