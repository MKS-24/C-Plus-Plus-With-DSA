#include <iostream>
using namespace std;
int j(int ptr[], int size, int target)
{
    int x , y,z;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i ; j < size ; j++)
        {
            if((ptr[i] + ptr[j]) == target  && i != j)
            {
                x = ptr[i] , y = ptr[j];
                z = (ptr[i]*10) + ptr[j];
            }
        }
    }
    return z;
}
int main()
{
    cout << "Enter Size : ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Number";
        cin >> arr[i];
    }
    int target;
    cout << "Enter Target : ";
    cin >> target;
    int temp = j(arr, size, target);
    int ld = temp % 10;
    int fd = temp/10;
    cout<<"["<<fd<<","<<ld<<"]";
    return 0;
}