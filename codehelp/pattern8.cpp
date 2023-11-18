// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Ente The pattern Number : ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}