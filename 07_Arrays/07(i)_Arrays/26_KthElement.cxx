#include <iostream>
using namespace std;

void converted(int arr[], int n, int size)
{
    int narr[size];
    int x = n-1;
    int last = size - 1;
    int y = n ;
    int c = 0;
    for(int i = 0 ; i < size ; i++)
    {
        if (i<n)
        {
            narr[x] = arr[last];
            last--;
            x--;
        }
        else{
            narr[y] = arr[c];
            c++;
            y++;
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        cout<<narr[i]<<" ";
    }
}

int main()
{
    int arr[] = {2, 8, 7, 1, 5, 9}; 
    int n;                            
    cout << "Enter Kth Element : ";
    cin >> n;
    if(n>sizeof(arr)/4) n%=sizeof(arr)/4;
    converted(arr, n, sizeof(arr)/4);
    return 0;
}
