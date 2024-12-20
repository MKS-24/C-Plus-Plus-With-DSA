# include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter Principle : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enter Time : ";
    cin>>t;    
    float simpleinterest = (p*t*r) / 100;
    cout<<"Simple Interest is : "<<simpleinterest;
    return 0;
}