#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {6, 2, 2, 5, 0};
    int count = 0;
    int same[count];
    for (int i = 0; i < 5; i++) // element
    {
        for (int j = 0; j < i; j++) // check in array
        {
            if (arr[i] == arr[j])
            {
                same[count] = i;
                count++;
                break;
            }
        }
    }
    for (int i = 0, x = 0; i < 5; i++)
    {
        if(x < count && same[x] == i) 
        {
            x++;
            continue;
        }
        cout<<arr[i];
    }
    return 0;
}