//Q3. Given two numbers a and b, write a function to print all odd numbers between them.
#include <iostream>
using namespace std;
void Main(int a , int b){
for(int i = min(a,b) ; i <= max(a,b) ; i++)
{
   if(i%2 != 0) cout<<i<<" ";
}
return ;
}
int main() 
{ 
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    Main(a,b);
    return 0; 
}