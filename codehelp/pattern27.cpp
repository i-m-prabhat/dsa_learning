
// 1 * * * * * * * * 1
// 1 2 * * * * * * 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }

        int k = 1;
        while (k <= (n - i) * 2)
        {
            cout << "* ";
            k++;
        }

        int l = i;
        while (l >= 1)
        {
            cout << l;
            if (l > 1)
            {
                cout << " ";
            }
            l--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
