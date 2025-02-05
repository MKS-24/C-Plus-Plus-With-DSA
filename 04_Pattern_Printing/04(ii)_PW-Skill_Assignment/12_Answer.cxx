//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;

    int temp = 1;
    int nsp = n-1;
    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= nsp ; j++)
        {
            cout<<" ";
        }
        nsp--;
        for(int k= 1 ; k <= temp ; k++)
        {
            cout<<num;
            num++;
        }
        temp += 2;
        cout<<endl;
    }
    return 0;
}
