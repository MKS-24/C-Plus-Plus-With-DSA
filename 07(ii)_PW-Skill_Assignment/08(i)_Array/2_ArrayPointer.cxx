# include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr = arr; // yaha hum array ka adress store kerrahe hai , arr give the address

    // int* ptr2 = &arr; // this is the wrong method
    int * ptr2 = &arr[0]; //now its correct;

    cout<<ptr<<endl<<ptr2;
    cout<<endl<<ptr[1]; // ptr[index no.] complete array ko access kerraha hai

    return 0;
}
// int x = 4;
// int* ptr = &x; // this is correct method QK isme hum element ka address store kerrahe hai
// int* ptr = x; // ye wrong method hai QK isme Hum element ka address nh pointer me element store kerrahe hai