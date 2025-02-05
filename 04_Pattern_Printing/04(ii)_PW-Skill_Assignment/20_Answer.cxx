// Enter Number : 4
//    1   
//   2 2  
//  3   3 
// 4     4
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int num = 1;
    int temp = n+3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if(i+j == n+1)
            cout<< num;
            else if(i>=2 && i+j == temp) 
            {
                cout<< num;
            }
            else cout<<" ";
        }
        num++;
        if(i>=2)
        temp+=2; 
        cout << endl;
    }
    return 0;
}