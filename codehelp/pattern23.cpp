// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;

    i = n;
    while (i >= 1)
    {
        int space = n - i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }

        j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
}