// 1 1 1 1
// 2 2 2 2
// 3 3 3 3 
// 4 4 4 4
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        num++;
    }
    return 0;
}