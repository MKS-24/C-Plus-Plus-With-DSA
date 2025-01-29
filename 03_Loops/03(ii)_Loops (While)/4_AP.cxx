# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int AP = 7;
    int i = 1;
    while(i <= n)
    {
        if(i == n) cout<<AP;
        else cout<<AP<<",";
        AP += 2;
        i++; // 7,9,11,13,15
    }
    return 0;
}
