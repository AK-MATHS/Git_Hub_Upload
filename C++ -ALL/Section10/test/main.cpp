#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Complete the code.

    int a{};
    long b{};
    char c{};
    float d{};
    double e{};

    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    // scanf("%ld", &b);
    // scanf("%c", &c);
    // scanf("%f", &d);
    // scanf("%lf", &e);
    // scanf("%d %ld %c % %lf", &ch, &d);
    
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
    // cout << endl;
    // printf("%ld", b);
    // cout << endl;
    // printf("%c", c);
    // cout << endl;
    // printf("%f", d);
    // cout << endl;
    // printf("%lf", e);
    // cout << endl;
    
    
    vector <string> numbers_in_words {"one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << numbers_in_words.at(1) << endl;
    
    
    
    
    // cin >> a >> b >> c >> d >> e;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;
    // cout << e << endl;








    return 0;
}