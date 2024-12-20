# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Real Number : ";
    float n;
    cin >> n;  // -2.4
    int num = (int) n;
    if(n<0) num = n - 1 ; 
    cout<<"Fractional Part of Given Number is : "<< n - num;
    return 0;
}