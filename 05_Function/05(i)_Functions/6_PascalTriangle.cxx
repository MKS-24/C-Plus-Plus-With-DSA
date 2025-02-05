# include<iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    int i = 1;
    while(i <= n)
    {
        factorial *= i;
        i++;
    }
    return factorial;
}
int nCr(int i,int j)
{
    return fact(i) / (fact(j) * fact(i-j));
}
int main(){
    cout<<"Enter Number : ";
    cout<<"\a"; //for beep sound
    int n;
    cin>>n;
    cout<<"\a"; //for beep sound
    int nsp = n-1;
    for(int i = 0 ; i <= n ; i++)  // here n = i and r = j in nCr
    {
        for(int k = 0 ; k <= nsp ; k++)
        {
            cout<<" ";
        }
        nsp--;
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<nCr(i,j) << " ";
        }
        cout<<endl;
    }
    return 0;
}