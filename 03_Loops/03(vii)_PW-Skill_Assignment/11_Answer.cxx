// Q5. WAP to print the sum of all the even digits of a given number.
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int sum = 0;
    while(n >= 0)
    {
        if(n == 0) break;
        int ld = n % 10;
        {
            // if(ld % 2 == 0)   => This step is also correct
            // sum += ld; 
          
            ld%2 == 0 ? sum += ld : sum += 0; // => This Step is also correct
          
            // sum += (ld%2 == 0 ? ld : 0);
        }
        n /= 10; 
    }
    cout<<"Sum Of Even Digits are : "<<sum;
    return 0;
}