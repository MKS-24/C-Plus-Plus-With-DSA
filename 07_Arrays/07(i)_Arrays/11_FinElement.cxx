# include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter an Array size : ";
    cin>>size;
    int array[size];
    cout<<"Ok!!\n";
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>array[i];
    }
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    for(int i = 0 ; i < size ; i++)
    {
        if(array[i] == target)
        {
            cout<<"Element "<<target<<" found!";
            break;
        }
        else cout<<"Not Exists!!";
    }

    return 0;
}