# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n ; 
    cin>>n;
    int nsp = n-1;
    int nst = 1; // Here nst mean content line condition 
    for(int i = 1 ; i <= n ; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= nsp ; j++)
        {
            cout<<"  ";
        }
        nsp--;
        for(int k = 1 ; k <= nst ; k++)
        {
            cout<<num <<" ";
            num++; // 2
        }
        for(int l = i-1 ; l >= 1 ; l--)
        {
            cout<<l <<" ";
        }
        nst++;
        cout<<endl;
    }
    return 0;
}