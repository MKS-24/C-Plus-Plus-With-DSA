#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int count = 0;
    for (int i = n; i >= 0; i--) // n = 15
    {
        n = n / 10;   //n = 1 // n = 0
        count++;    //count = 2
        if (n == 0)
            break;
    }
    cout << "Given Number having digits : "<<count;
    return 0;
}