# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n ; 
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        int num = 1;
        for(int j = i ; j >= 1 ; j--)
        {
            cout<< j <<" ";
        }
        cout<<endl;
    }
    return 0;
}