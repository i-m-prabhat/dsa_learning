//         *
//       * *
//     * * *
//   * * * *
// * * * * *

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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        j = 1;
        while (j <= i)
        {
            cout << '*';
            j++;
        }

        cout << endl;
        i++;
    }
}