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

    if (flag == true || min == arr[0])
    {
        cout << min;
    }
    else
        cout << "Not Exist";
    return 0;
}