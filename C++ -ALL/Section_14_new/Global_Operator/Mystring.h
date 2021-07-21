#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring {

    friend bool operator== (const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator- (const Mystring &obj); 
    friend Mystring operator+ (const Mystring &lhs, const Mystring &rhs);

private:
    char *str; //C-style string
    
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(Mystring &&rhs);        //move assignement
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
