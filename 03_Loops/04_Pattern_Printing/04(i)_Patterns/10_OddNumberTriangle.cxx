# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i*2 ; j+=2) // for printing only odd Number isliye i*2 and j+=2;
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}