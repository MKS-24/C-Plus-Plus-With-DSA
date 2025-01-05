// Ternary Means Three Statement
// Condition ? True : False;

# include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    (x%2 == 0) ? cout<<"Even" : cout<<"Odd";
    return 0;
}