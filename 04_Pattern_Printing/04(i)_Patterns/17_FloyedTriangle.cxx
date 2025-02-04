// Another Method of Floyed Triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            int a = 1;
            if( (i+j)%2  != 0 ) a = 0;
            cout<<a<<" ";
        }
        cout << "\n";
        num++;
    }
    return 0;
}