#include <iostream>
using namespace std;
int hcf(int n1, int n2 = 5)
{
    int a = 5;
    for (int i = n1; i >= 1; i--) // min isliye use kiya ke n1,n2 me jo choti value hoi tab tak loop chalao QK HCF ki value n1 , n2 me jo value choti hogi uske equal tu aasakhti hai lekin chote number se bari value nh aasakhti
    {
        cout<<"Chalgaya\n";
    }
    return a; 
}

int main()
{
    int n1;
    cout << "Enter First Number : ";
    cin >> n1;
    cout<<"is baar value bhi print hoi hai as compared to '14_Concept'"<<hcf(n1);
    return 0;
}