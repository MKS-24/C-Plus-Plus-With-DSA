// Q9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example.
//  153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Armstrong Number Limit ?"<<endl<<"Answer : ";
    cin>>n;
    for (int i = 1; i <= n; i++) 
    {
        if(i != 1 && i < 10) continue;
        int a = i;
        int x = i;
        int y = i;
        int count = 0;
        while (a > 0)
        {
            count++;
            a /= 10;
        }
        int arm = 0;
        for (int k = 1; k <= count; k++)
        {
            int ld = x % 10;
            int product = 1;
            for (int j = 1; j <= count; j++)
            {
                product *= ld;
            }
            arm += product;
            x/=10;
        }
        if(arm == y) cout<<y<<endl;
    }
    return 0;
}