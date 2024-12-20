# include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=2;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl; // Output is 2 instead of 2.5 just because of x and y are integer

    // for Actual Answer having decimal 
    float t=5;   
    cout<<t/y;
    return 0;
}