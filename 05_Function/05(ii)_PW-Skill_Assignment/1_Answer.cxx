// Q1. Write a function to print squares of n natural numbers.
#include <iostream>
# include<math.h>
using namespace std;
int square(int i)
{
    return i*i;
}
void pow(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<i<<" : "<<square(i)<<endl;
    }
}
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    pow(n);
    return 0;
}