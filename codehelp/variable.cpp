#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "The value of variable 'a' is: " << a << endl;

    char b = 'P';
    cout << "The value of character variable 'b' is: " << b << endl;

    float c = 3.14f;
    cout << "The value of floating-point number variable 'c' is: " << c << endl;

    double d = 3.144f;
    cout << "The value of double-point number variable 'd' is: " << d << endl;

    bool e = true;
    cout << "The value of boolean variable 'e' is: " << (e ? "true" : "false") << endl;

    int size = sizeof(d);
    cout << "Size of the variable 'd': " << size << " bytes." << endl;

    return 0;

    return 0;
}