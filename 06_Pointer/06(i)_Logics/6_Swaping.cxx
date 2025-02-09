#include <iostream>
using namespace std;
void swapii(int* a, int* b)
{
    int temp = *a;
    * a = * b;
    * b = temp; 
    return;
}
int main()
{
    cout << "Enter First Number : ";
    int n1, n2;
    cin >> n1;
    cout << "Enter Second Number : ";
    cin >> n2;
    int* x = &n1 ,* y = &n2;
    swapii(x,y);
    cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2;
    // ye bhi sahih hai cout<<"n1 = "<<*x<<endl<<"n2 = "<<*y;
    return 0;
}