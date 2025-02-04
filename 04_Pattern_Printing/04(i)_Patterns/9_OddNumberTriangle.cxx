# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        int odd = 1;
        for(int j = 1 ; j <= i ; j++) 
        {
            cout<<odd<<" ";
            odd += 2;
        }
        cout<<"\n";
    }
    return 0;
}