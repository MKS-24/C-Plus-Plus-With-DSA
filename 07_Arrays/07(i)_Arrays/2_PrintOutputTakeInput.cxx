# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Size of an array : ";
    int size;
    cin>>size;
    int arr[size];
    int i = 0;
    cout<<"Enter Value for Each Index;"<<endl; // indices inder ki plural hoti
    while(i < size)
    {
        cout<<"Enter "<<i+1<<" value : ";
        cin>>arr[i];
        i++;
    }
    cout<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Value "<<i+1<<" is : ";
        cout<<arr[i]<<endl;
    }

    return 0;
}