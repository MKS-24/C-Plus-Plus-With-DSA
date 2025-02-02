// // 6. WAP to print the sum of a given number and its reverse.
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int sum = 0 , rev = 0;

    while (n >= 0)
    {
        if(n == 0) break;
        int ld = n % 10;
        sum += ld;
        rev *= 10;
        rev += ld;
        n /= 10; 
    }
    cout<<"Sum is : "<<sum<<endl<<"Reverse is : "<<rev;
    return 0;
}
