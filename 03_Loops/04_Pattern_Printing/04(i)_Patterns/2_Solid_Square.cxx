# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++) // Row // (i and j ae iterator)
    {
        for(int j = 1 ; j <= n ; j++) // Colume
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}