#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    bool flag = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is Composite";
            flag = false;
            break;
        }
    }
    if(flag == true || n == 1 || n == 2) cout<<"Not a Composite Number";
    return 0;
}