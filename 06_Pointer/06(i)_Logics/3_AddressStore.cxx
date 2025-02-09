#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int* p = &x ; // same data type ke pointer hone chahiye

    cout<<&x<<endl<<p;
    cout<<endl<<"Value of x that pointed by *p : "<<*p;
    return 0;
}