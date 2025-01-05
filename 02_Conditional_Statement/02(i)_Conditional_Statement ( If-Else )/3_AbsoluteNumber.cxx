# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>> n;
    if(n<0) n = -n;
    cout<<"Absolute Number is : "<<n;
    return 0;
}