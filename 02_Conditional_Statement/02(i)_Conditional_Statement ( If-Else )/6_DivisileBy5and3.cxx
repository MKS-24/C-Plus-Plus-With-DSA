# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    // if( (n%5 == 0) && (n%3 == 0) ) cout<<n<<" is divisible by 5 & 3";
    if(n%15 == 0)cout<<n<<" is divisible by 5 & 3";  // Both method are correct
    else cout<<n<<" is not divisible by 5 & 3";
    return 0;
}