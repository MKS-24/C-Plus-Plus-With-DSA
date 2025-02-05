//       A
//     B A B
//   C B A B C
// D C B A B C D
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int nsp = n - 1;
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int l = i; l >= 2; l--)
        {
            cout << char (64 + l) <<" ";
        }
        for (int k = 1; k <= temp; k++)
        {
            cout << char (64 + k)<<" ";
        }
        temp++;

        cout << endl;
    }
    return 0;
}
