//       A
//     A B C
//   A B C D E
// A B C D E F G
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
            cout<<char(num+64);
            num++;
        }
        temp += 2;
        cout<<endl;
    }
    return 0;
}
