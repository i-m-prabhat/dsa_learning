//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

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
            cout << j;
            j++;
        }

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}