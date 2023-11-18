//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the star pattern: ";
    cin >> n;

    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        space--;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    space = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        space++;

        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
