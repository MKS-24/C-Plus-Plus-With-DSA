#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    for (int i = 1; i <= 2*n-1 ; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            int x = i , y = j; // these are psuedo variable
            if(x > n )
            {
                x = 2*n - i; // important point
            }
            if(y > n)
            {
                y = 2*n - j; // important point
            } 
            cout << min(x, y) << " ";
        }
        cout << endl;
    }
    return 0;
}