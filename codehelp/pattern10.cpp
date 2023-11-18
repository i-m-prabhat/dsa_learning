// A A A
// B B B
// C C C

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}