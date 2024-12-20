# include<iostream>
using namespace std;
int main(){
    int a = 10 , b = 3;
    // Formula for Remainder
    // Dividend = (Divisor * Quotient) + Remainder
    // divident = a , divisor = b , quotient(q) = a/b 
    int q = a/b;
    int remainder = a - (b * q);
    cout<<"Remainder is : "<<remainder;
    return 0;
} 