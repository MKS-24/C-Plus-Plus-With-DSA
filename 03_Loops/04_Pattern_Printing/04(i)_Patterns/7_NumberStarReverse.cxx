#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int str = n; // str = star
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = str; j >= 1; j--)
        {
            cout << x << " ";
            x++;
        }
        str--;
        cout << "\n";
    }
    return 0;
}