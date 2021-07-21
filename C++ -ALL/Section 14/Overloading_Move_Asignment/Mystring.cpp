




Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) {     //self assignment
        return *this;       // return current object
    }
    else {
    }
    delete [] this->str;    // deallocate  current storage
    this->str = rhs.str;    // steal pointer
    
    rhs.str = nullptr;      //null out the rhs object
    
    return *this;           // return current oblect
}