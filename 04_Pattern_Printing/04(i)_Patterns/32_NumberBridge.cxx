#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int nsp = 1;
    int nst = n-1;
    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= nst ; j++)
        {
            cout<<num<<" ";
            num++;
        }
        for(int k = 1 ; k <= nsp ; k++)
        {
            cout<<"  ";
            num++;
        }
         for(int k = 1 ; k <= nst ; k++)
        {
            cout<<num<<" ";
            num++;
        }
        nst--;
        nsp += 2;
        cout<<"\n";
    }
    return 0;
}