#include <iostream>
# include<climits>
using namespace std;
int main()
{
    int arr[] = {3, -1, -5, 10, 7};
    int i = 0;
    int j = sizeof(arr) / arr[0] - 1;
    int temp = INT_MIN;
    int max = INT_MIN;
    while (i < j)
    {   
        if(arr[i] == arr[j])
        {
            j--;
        }
        if (arr[i] < arr[j])
        {
            max = arr[i]; 
            i++;
        }
        else if (arr[j] < arr[i])
        {
            max = arr[j]; 
            j--;
        }
        if (max > temp)
        {
            temp = max; 
        }
    }
    if(temp == INT_MIN) cout<<"Second Largest is not found!!";
    else cout << temp;
    return 0;
}