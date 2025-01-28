# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int AP = 1;
    for (int i = 1; i<=n ; i++)
    {
        if(i == n) cout<<AP; // Here if condition is used to avoid comma(,) after the last digit
        else cout<<AP<<",";
        AP += 2;
    }
    return 0;
}