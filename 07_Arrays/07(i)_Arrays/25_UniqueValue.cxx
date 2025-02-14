#include <iostream>
using namespace std;
int main()
{
    int size ;
    cout<<"Enter Size Of an Array : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i ++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>arr[i];
    }
    int count = 0; 
    int same[count];
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0; j < i ; j++)
        {
            if(arr[i] == arr[j])
            {
                same[count] = i;
                count++;
                break;
            }
        }
    }
    cout<<"Unique Elements are : ";
    
    for(int i = 0 , x = 0 ; i < size ; i++)
    {
        if(same[x] == i && x < count)
        {
            x++;
            continue;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}