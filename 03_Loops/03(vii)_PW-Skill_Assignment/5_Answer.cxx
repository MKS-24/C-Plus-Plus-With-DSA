// Q5. Display this GP - 3,12,48,.. upto ‘n’ terms
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int i = 1;
    int GP = 3;
    while (i <= n)
    {
        cout << GP <<" ";
        i++;
        GP *= 4;
    }
}