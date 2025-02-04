#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number Less than 26 : "; // Less Than 26 isliye qk 26 ke baad dusre character print hojaega
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j+64) << " "; // Aese bhi likh sakhte hai char(j+64)
        }
        cout << "\n";
    }
    return 0;
}