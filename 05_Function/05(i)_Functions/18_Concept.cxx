#include <iostream>
using namespace std;
int x = 4;
void fun1(int a)
{
    cout<<x<<endl;
    return;
}
void fun2()
{
    cout<<x<<endl;
    return;
}
int main()
{
    x = 1; // global variable change QK x ko main function me initilize nh kiya
    cout<<x<<endl;
    int x = 10;
    cout<<x<<endl;
    fun1(x);
    fun2();

    return 0;
}