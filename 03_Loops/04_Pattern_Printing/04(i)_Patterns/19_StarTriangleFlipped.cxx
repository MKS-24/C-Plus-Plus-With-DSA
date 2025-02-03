#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int nsp = n-1; // Contition for 'j' loop
    int str = 1;  // Condition for 'k' loop

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i+j >= n+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}