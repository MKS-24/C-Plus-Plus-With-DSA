// Own created Method Dificult or logical as compared to 30_Bridge.cxx Method
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int nsp = 1;
    int nst = 2 * n - 1;
    int row = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        bool flag = false;
        if (i == 1)
        {
            for (int k = 1; k <= 2 * n - 1; k++)
            {
                cout << "* ";
                flag = true;
            }
        }
        if (flag == true)
        {
            cout << endl;
            continue;
        }
        for (int j = 1; j <= row; j++) 
        {
            if(i+j == n+2)
            {
                for(int l = 1 ; l <= nsp ; l++)
                {
                    cout<<"  ";
                }
            }
            cout << "* ";
        }
        cout << endl;
        nsp += 2;
        row -= 2;
    }
    return 0;
}