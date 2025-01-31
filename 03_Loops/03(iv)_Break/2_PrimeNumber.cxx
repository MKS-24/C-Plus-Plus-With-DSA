#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    bool flag = true;
    for (int i = 2; i <= n - 1; i++) 
    {
        if (n % i == 0)
        {
            flag = false;
            break; // jese hi condition hit hoi wese hi bahir nikal dega loop se
        }
    }
    if(n == 1) cout<<n<<" is not a Composite or a Prime Number!";
    else  if( n == 2 || flag == true) cout<<n<<" is Prime Number!";
    else cout<<n<<" is Composite Number!";
    return 0;
}