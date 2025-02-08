// Q4. Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;
int square(int n)
{
    return n * n;
}
int count(int n)
{
    int count = 0;
    if (n == 0)
        count = 1;
    
    if(n < 0) n = -n;
   
    if (n > 0) 
    {
        count = 0;
        while (n > 0)
        {
            count++;
            n /= 10;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << "Square of the Number is : " << square(n) << endl
         << "Digits in this Number is : " << count(n);
    return 0;
}