// Enter Number : 5
//     *    
//    * *   
//   *   *  
//  *     * 
// *       *
//  *     * 
//   *   *  
//    * *   
//     *    
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int temp = n + 3;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i + j == temp)
            {
                if (i==1) continue;
                cout << "*";
            }
            else if(i > n && i < 2*n-1 && i+j == 3*n-1) cout<<"*";
            else if (i + j == n + 1 || i + j == temp)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
        if (i >= 2)
            temp += 2;
        if (i == n)
            temp = n + 3;
    }
    return 0;
}
