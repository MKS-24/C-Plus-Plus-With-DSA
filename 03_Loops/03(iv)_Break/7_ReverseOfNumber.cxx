# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int rev = 0;
    for(int i = n ; i >= 0 ; i--)
    {
        int ld = n % 10;  // 12 // ld = 1
        rev *= 10;  // 20
        rev += ld; // 21
        n /= 10; 
        if(n == 0) break;
    }
    cout<<"Reverse of a Number is : "<<rev;
    return 0;
}