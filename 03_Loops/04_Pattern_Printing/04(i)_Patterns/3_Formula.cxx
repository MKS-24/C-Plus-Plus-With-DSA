#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if(a == 1) cout<<"  ";
        for (int k = 1; k <= n; k++)
        { 
            if(a>=2) break;
            cout << k << " ";
        }
        if (a == 1)
            cout << endl;
        cout << i << " ";
        for (int j = 1; j <= n; j++)
        {
            cout << '*' << " ";
        }
        cout << "\n";
        a++;
    }
    // Find Formula after getting an output
    return 0;
}