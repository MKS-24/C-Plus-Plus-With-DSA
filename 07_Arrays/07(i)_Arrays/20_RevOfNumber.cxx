#include <iostream>
using namespace std;
void rev(int arr[], int size)
{
    int temp[size];
    int x = size-1;
    for (int i = 0; i < size; i++)
    {
        temp[x] = arr[i];
        x--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
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