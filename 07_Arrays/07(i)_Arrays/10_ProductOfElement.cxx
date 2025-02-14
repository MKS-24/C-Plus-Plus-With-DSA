# include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of an Array : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>arr[i];
    }
    int product = 1;
    for(int i = 0 ; i < size ; i++)
    {
        product *= arr[i];
    }
    cout<<"Sum inside array is : "<<product;

    return 0;
}