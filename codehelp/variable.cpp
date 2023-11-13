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

    char ch = 98;
    cout << ch << "\n";

    unsigned int aa = 112;
    cout << aa << endl;

    unsigned int aaa = -112; // dont use unsigned to negative because unsigned always positive
    cout << aaa << endl;

    int a1 = 2 / 3;
    cout << a1 << endl;

    float a2 = 2.1 / 3;
    cout << a2 << endl;

    double a3 = 2.33333 / 3;
    cout << a3 << endl;

    int x = 2;
    int y = 3;

    bool first = (x == y);
    cout << first << endl;

    bool second = (x != y);
    cout << second << endl;

    bool third = (x > y);
    cout << third << endl;

    bool fourth = (x >= y);
    cout << fourth << endl;

    bool fifth = (x < y);
    cout << fifth << endl;

    bool sixth = (x <= y);
    cout << sixth << endl;

    cout << !x << endl;

    return 0;
}