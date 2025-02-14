# include<iostream>
# include<climits>
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
    int max = INT_MIN;
    bool flag = false;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > max) 
        {
            max = arr[i];
            flag = true;
        }
    }
    int smax = INT_MIN; // use of int_min is storing small number at initially..
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == max) continue;
        if(arr[i] > smax) 
        {
            smax = arr[i];
        }
    }
    if(flag == true && smax != INT_MIN)
    {
        cout<<smax;
    }
    else cout<<"Not Exist";
    return 0;
}