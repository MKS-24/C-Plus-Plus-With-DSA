// Enter Number : 5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int temp = n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= temp ; j++)
        {
            cout << " ";
        }
        temp--;
        for (int k = 1 ; k <= i ; k++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}
