# include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>> arr[i];
    }
    cout<<"Enter Target : "; // target mean count number greater than the target value
    int target;
    cin>>target;
    int count = 0;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > target) count++;
    }
    if(count == 0) cout<<"No one is Greatest!!";
    else if(count > 0) cout<<count;
    else cout<<"Something Went Wrong With Your Entered Value!!";
    return 0;
}