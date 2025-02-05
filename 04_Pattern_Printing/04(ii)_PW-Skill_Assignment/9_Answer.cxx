//       A
//     A B
//   A B C
// A B C D
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int temp = n-1;
    for(int i = 1 ; i <= n ; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= temp ; j++)
        {
            cout<<"  ";
        }
        temp--;
        for(int k = 1 ; k <= i ; k++)
        {
            cout<<char(num+64)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}