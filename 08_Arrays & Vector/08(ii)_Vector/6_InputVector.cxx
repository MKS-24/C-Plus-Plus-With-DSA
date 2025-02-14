# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> arr(5); // input ke liye size diya ager array ki tarha use kerrahe hai tu
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter "<<i+1<<" Value : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }

    // without size kese hoga
    vector<int>v;
    for(int i = 0 ; i < 5 ; i++)
    {
        int x;  // by using extra variable
        cout<<"Enter "<<i+1<<" Value : ";
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}