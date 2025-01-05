# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n >= 100 && n <= 999) cout<<n<< " is 3 digit Number!";
    else cout<<n<< " is not a 3 digit Number!";
    return 0;
}