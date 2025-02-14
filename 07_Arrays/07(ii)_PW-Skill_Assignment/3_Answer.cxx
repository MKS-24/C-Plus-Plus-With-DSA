// Q3. Find the minimum value out of all elements in the array.
# include<iostream>
# include<climits>
using namespace std;
int main()
{
    int arr[5] = {5,4,1,2,3};
    int min = INT_MAX;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout<<min;
    return 0;
}