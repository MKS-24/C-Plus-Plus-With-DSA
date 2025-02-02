// Q4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int i = 1;
    int AP = 4;
    while (i <= n)
    {
        cout<<AP<<" ";
        AP += 3;
        i+=1;
    }
    return 0;
}