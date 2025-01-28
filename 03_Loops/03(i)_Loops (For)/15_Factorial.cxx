#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int fact = 1;
    int a = n;
    for(int i = 1 ; i <= n ; i++) 
    {
        fact *= a;
        a--;
    }
    cout<<"Factorial Of Number is : "<<fact;
    return 0;
}