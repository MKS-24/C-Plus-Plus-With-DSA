# include<iostream>
using namespace std ;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int sz = sizeof(arr) / sizeof(arr[3]);
    cout<<"size is : "<<sz; 
    return 0;
}
// is question me hum sizearr[3] ki bajae 4 bhi likh sakhte hai QK ye int data type ki array hai jis me bht se integer hai tu total size of array ko 4 se divide karo ga tu  answer aajai ga(size)