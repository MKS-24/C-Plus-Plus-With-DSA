# include<iostream>
using namespace std;
int main(){
    if(3 + 2 % 5)
    cout<<"This Works\n";
    if(0.1)
    cout<<"Even this Works\n";
    if(01)
    cout<<"Also even this Works\n";
    if(-5)  // Non zero mean true and true mean 1
    cout<<"Suprisingly this Works\n";
    return 0;
}