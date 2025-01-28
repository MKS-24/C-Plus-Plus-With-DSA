# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int GP = 1;
    for(int i = 1; i <= n ; i++)
    {
        if(i == n) cout<<GP;
        else cout<<GP<<",";
        GP *= 2;
    }
    return 0;
}