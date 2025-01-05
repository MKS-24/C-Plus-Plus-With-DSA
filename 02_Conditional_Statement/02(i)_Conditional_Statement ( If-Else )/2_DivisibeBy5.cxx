# include<iostream>
using namespace std;
int main(){  // Round bracket called perenthisis
    cout<<"Enter Positive Number : ";
    int n;
    cin>>n;
    if(n%5 == 0) cout<<"Number is divisible by 5";
    else if (n%5 != 0) cout<<"Number is not divisible by 5";
    return 0;
}