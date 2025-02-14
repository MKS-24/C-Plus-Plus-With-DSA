// Q4. Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size ; i++)
    {
        cout << "Enter " << i + 1 << " Element : ";
        cin >> arr[i];
    }
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j]) cout<<arr[i]<<" ";
        }
    }
    return 0;
}