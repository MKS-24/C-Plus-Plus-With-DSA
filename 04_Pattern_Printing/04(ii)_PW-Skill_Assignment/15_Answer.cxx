// Enter Number : 4
// A B C D E F G 
// A B C   E F G
// A B       F G
// A           G
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    for(int i = 1 ; i <= 2*n-1 ; i++)
    {
        cout<<char(64+i)<<" ";
    }
    cout<<endl;
    int temp = n-1 , nsp = 1;
    for (int i = 1; i <= n-1 ; i++)
    {
        char ch = 'A';
        for(int j = 1 ; j <= temp ; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        for(int k = 1 ; k <= nsp ; k++)
        {
            cout<<"  ";
            ch++;
        }
        nsp+=2;
        for(int j = 1 ; j <= temp ; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout << endl;
        temp--;
    }
    return 0;
}