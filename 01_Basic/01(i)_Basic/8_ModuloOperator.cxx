# include<iostream>
using namespace std;
int main(){
    int x=10;
    int y = 3;
    cout<<x%y<<endl;  // modulo operator give remainder %
    // if a is small as compared to b
    int a = 2;
    int b = 10;
    cout<<a%b<<endl; // Answer is a(value)


    cout<<10 % -3;  // a % b  =  a % -b
    cout<<-10 % 3;  // (-a) % b 
    return 0;
}
// Modulus operator doesnt work with float