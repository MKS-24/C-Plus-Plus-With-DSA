#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int sum = 1;
    int f = 0; // f for first
    int s = 1; // s for second
    for (int i = 1; i <= n; i++) 
    {
        if(i == n) continue;
        f = sum;
        sum = f + s;
        s = f;
    } 
    if(n == 0) cout<<"Zero Position Doesn't Exist!!";
    else cout << sum << " ";
    return 0;
}