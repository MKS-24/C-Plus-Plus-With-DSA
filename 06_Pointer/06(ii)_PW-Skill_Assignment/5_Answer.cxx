// Q5. Predict the output of the following code snippet.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    cout<<*ptr;
    return 0;
}

// Ans : The program is correct and will compile but might result in runtime error.This is because ptr will have a garbage  address which might even point to a location which does not belong to our program and hence might result in  Segmentation Fault when we are trying to access it.