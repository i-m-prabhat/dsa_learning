#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Number: ";

    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        // sum += i;
        // ++i;
        sum = sum + i;
        i = i + 1;
    }

    cout << "Value of sum is : " << sum << endl;
    return 0;
}