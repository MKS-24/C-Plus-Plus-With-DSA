#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    int row = n - 1;
    int nst = n - 1;
    int nsp = 1;
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= nst; j++)  // nst loop
        {
            cout << "* ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= nst; l++) // this loop is same as nst loop
        {
            cout << "* ";
        }
        cout << endl;
        nsp += 2;
        nst--;
    }
    return 0;
}