#include <iostream>
using namespace std;
void rev(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start < end)
    {
        swap(arr[end],arr[start]);
        end--,start++;
    }

    return;
}
int main()
{
    cout << "Enter Size of an array : ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Number : ";
        cin >> arr[i];
    }
    rev(arr, size);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<i <<" Index value : "<<arr[i]<<endl;
    }

    return 0;
}