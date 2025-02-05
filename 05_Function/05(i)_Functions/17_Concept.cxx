#include <iostream>
using namespace std;
int x = 4;
void fun1(int a)
{
    cout<<a<<endl;
    return;
}
void fun2()
{
    cout<<x<<endl;
    return;
}
int main()
{
    cout<<x<<endl;
    int x = 10;
    cout<<x<<endl;
    fun1(x);
    fun2();

    return 0;
}