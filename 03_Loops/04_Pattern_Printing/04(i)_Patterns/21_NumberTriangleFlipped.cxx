#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int nsp = n-1; // Contition for 'j' loop
    int str = 1;  // Condition for 'k' loop

    for (int i = 1; i <= n; i++)
    {
        for (int j = nsp ; j >= 1; j--)
        {
            cout << "  ";
        }
        nsp--; 
        for (int k = 1; k <= str; k++)
        {
            cout << k << " ";
        }
        cout << "\n";
        str++;
    }
    return 0;
}