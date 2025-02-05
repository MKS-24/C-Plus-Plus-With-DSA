// Enter Number : 4
// 1234321
// 123 321
// 12   21
// 1     1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int temp = n;
    int nsp = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= temp ; j++)
        {
            cout<<j;
        }

        for(int k = 1 ; k <= nsp ; k++)
        { 
            if(i == 1) break;
            cout<<" ";
        }
        if(i>=2)
        nsp += 2;

        int x = temp;
        if(i==1) x--;
        for(int l = x ; l >= 1 ; l--)
        {
            cout<<l;
        }
        temp--;
        cout<<endl;
    }
    return 0;
}
