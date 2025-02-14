#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "How Many Number You Want To Enter : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Number : ";
        cin >> arr[i];
    }

    // Minimum ke liye ..
    int min = arr[0];
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        { 
            min = arr[i];
            flag = true;
        }
    }
    int min2 = arr[0];
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == min) continue;
        if(arr[i] < min2) 
        {
            min2 = arr[i];
        }
    }
    if (flag == true)
    {
        cout << min2;
    }
    else
        cout << "Not Exist";
    return 0;
}