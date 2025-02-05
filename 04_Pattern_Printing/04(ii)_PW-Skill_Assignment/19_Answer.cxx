// Enter Number : 5
// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int nsp = 1;
    int loop = 2 * n - 1;
    int nst = n;
    for (int i = 1; i <= loop; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout <<"*";
        }

        for(int k = 1 ; k <= nsp ; k++)
        {
            if(i==1) break;
            cout<<" ";
        }
        if(i>1 && i < n) nsp += 2;
        else if(i>1) nsp-=2;

        for (int k = 1; k <= nst; k++)
        {
            if((i==1 || i == 2*n-1) && k==1) k=2;
            cout <<"*";
        }
        if(i<n) nst--;
        else nst++;
        cout << endl;
    }
    return 0;
}
