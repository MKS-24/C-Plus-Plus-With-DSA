#include <iostream>
using namespace std;
int y = 4;
void fun() // Formal Parameter
{
    cout<<y<<endl;
    return;
}
int main()
{
    int x = 5; // Not the gloabal variable
    cout<<x<<endl;
    cout<<y<<endl; 
    fun();
    return 0;
}