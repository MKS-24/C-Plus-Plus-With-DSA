#include <iostream>
using namespace std;
int hcf(int n1, int n2)
{
    int a;
    for (int i = min(n1, n2); i >= 1; i--) // min isliye use kiya ke n1,n2 me jo choti value hoi tab tak loop chalao QK HCF ki value n1 , n2 me jo value choti hogi uske equal tu aasakhti hai lekin chote number se bari value nh aasakhti
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            a = i;
            break;  // is method me time complexity kam hogai
        }
    }
    return a;
}

int main()
{
    int n1;
    cout << "Enter First Number : ";
    cin >> n1;
    int n2;
    cout << "Enter Second Number : ";
    cin >> n2;
    int x;
    cout << "HCF of " << n1 << " and " << n2 << " is " << hcf(n1, n2);
    return 0;
}