#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring {

private:
    char *str; //C-style string
    
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(Mystring &&rhs);        //move assignement
    
    Mystring operator- () const;
    Mystring operator+ (const Mystring &rhs) const;
    bool operator== (const Mystring &rhs) const;
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
