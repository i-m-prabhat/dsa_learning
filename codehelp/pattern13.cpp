// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;

    i = 1;
    int value = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}