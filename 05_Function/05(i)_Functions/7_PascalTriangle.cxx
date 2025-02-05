#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    cout << "\a"; // for beep sound
    int n;
    cin >> n;
    cout << "\a"; // for beep sound
    int nsp = n - 1;
    for (int i = 0; i <= n; i++) // here n = i and r = j in nCr
    {
        for (int k = 0; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp--;
        int current = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << current << " ";
            current = current * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}