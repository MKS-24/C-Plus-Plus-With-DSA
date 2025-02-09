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
    // cout<<"Before Swapping..\nn1 = "<<n1<<endl<<"n2 = "<<n2;
    // cout<<"n1 = " <<swapii(&n1,&n2)<<endl;
    // cout<<"n2 = "<<;
    swapii(&n1, &n2);
    cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2;
    return 0;
}