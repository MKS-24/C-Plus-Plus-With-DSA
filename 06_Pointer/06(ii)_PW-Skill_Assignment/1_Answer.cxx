//Q1. Write a program to find out the product of two numbers using pointers.
# include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter 2nd Number : ";
    cin>>n2;
    float* ptr = &n1 , *ptr2 = & n2;
    cout<<n1<<" * "<<n2<<" : "<<(*ptr) * (*ptr2);   // multiplication ka sign hai * 
    return 0;
}