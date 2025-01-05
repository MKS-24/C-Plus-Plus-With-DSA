#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
            cout << n << " is divisible by 5 and 3";
        else
            cout << n << " is divisible by 5 but not 3";
    }
    else if (n % 3 == 0)
    {
        if (n % 5 == 0)
            cout << n << " is divisible by 5 and 3";
        else
            cout << n << " is divisible by 3 but not 5";
    }
    else
        cout << "Not divisible by 5 and 3";
    return 0;
}