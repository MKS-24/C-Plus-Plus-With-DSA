# include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"How Many Number You Want To Enter : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>arr[i];
    }
    int max = arr[0];
    bool flag = false;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > max) 
        {
            max = arr[i];
            flag = true;
        }
    }
    if(flag == true || max == arr[0])
    {
        cout<<max;
    }
    else cout<<"Not Exist";
    return 0;
}