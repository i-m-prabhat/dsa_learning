// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the size of matrix: ";
    cin >> n;

    i = 1;
    char start = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << start;
            start++;
            j++;
        }
        // start = 'A';
        cout << endl;
        i++;
    }
}