#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of  Array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }
    int min = INT_MAX;
    int x, y;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            x = i;
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            y = i;
        }
    }

    int temp = arr[y];
    arr[y] = arr[x];
    arr[x] = temp;

    for (int i = 0; i < size; i++)
    {
        cout<<i<<" "<<arr[i]<<endl;

    }
    return 0;
}