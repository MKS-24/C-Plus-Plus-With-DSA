#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int sum = 0;
    while(n>=0)
    {
        int ld = n%10;  
        sum += ld;
        n /= 10;  
        if(n == 0) break;
    }

    cout<<"Sum of Given Number is : "<<sum;
    return 0;
}