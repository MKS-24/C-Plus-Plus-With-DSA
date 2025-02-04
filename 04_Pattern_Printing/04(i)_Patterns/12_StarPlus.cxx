#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Odd Number : ";
    int n;
    cin >> n;
    int mid = (n / 2) + 1 ;
    if (n % 2 == 0)
        cout << "Something Went Wrong With Input !!";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((j == mid) || i == mid)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << "\n";
        }
    }
    return 0;
}
