//Q1. Calculate the product of all the elements in the given array.
# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Size : ";
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>arr[i];
    }
    int product = 1;
    for(int i = 0 ; i < size ; i++)
    {
        product *= arr[i]; 
    }
    cout<<"The product of all the elements in the given array : "<<product;
    return 0;
}