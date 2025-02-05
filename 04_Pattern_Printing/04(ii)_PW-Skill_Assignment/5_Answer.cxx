// *
// **
// ***
// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int temp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j = 1 ; j <= temp ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i >= n) temp--;
        else temp++;
    }
    return 0;
}