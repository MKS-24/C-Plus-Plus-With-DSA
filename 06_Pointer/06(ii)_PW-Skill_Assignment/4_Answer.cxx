// Q4. Predict the output of the following code snippet.
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout<<b;
    return 0;
}
// Ans:
// a gets the value of b