#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter First Number : ";
    cin >> n1;
    cout << "Enter Second Number : ";
    cin >> n2;
    cout << "Enter Third Number : ";
    cin >> n3;

    if((n1>n2) && (n1>n3)) cout<<n1<<" is Greatest of All!";
    else if((n2>n1) && (n2>n3)) cout<<n2<<" is Greatest of All!";
    else if((n3>n2) && (n3>n1)) cout<<n3<<" is Greatest of All!";
    else cout<<"No One is Greater than all!";
    return 0;
}