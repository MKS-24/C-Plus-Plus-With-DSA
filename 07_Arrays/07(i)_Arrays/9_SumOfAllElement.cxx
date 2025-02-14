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
    int sum = 0;
    for(int i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }
    cout<<"Sum of element inside array is : "<<sum;

    return 0;
}