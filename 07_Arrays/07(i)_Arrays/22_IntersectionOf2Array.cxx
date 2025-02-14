#include <iostream>
using namespace std;
int main()
{
    int size1;
    cout << "Enter Size of 1st Array : ";
    cin >> size1;
    int size2;
    cout << "Enter Size of 2nd Array : ";
    cin >> size2;
    int arr[size1] , arr2[size2];
    cout<<"Enter Element in 1st Array !! \n";
    for(int i = 0 ; i < size1 ; i++)
    {
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>arr[i];
    }
    cout<<endl<<"Enter Element in 2nd Array !! \n";
    for(int i = 0 ; i < size2 ; i++)
    {
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>arr2[i];
    }
    bool flag = false;
    for(int i = 0 ; i < size1 ; i++)
    {
        for(int j = 0 ; j < size2 ; j++)
        {
            if(arr[i] == arr2[j])
            {
                flag = true;
                cout<<arr[i]<<" ";
            }
        }
    }
    if(flag == false) cout<<"Not Matched"<<endl;

    return 0;
}