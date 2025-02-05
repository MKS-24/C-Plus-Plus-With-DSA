# include<iostream>
using namespace std;
int fact(int i){
    int fact = 1;
    for(int j = 1 ; j <= i ; j++)
    {
        fact *= j;
    }
    return fact;
}
int main()
{
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        cout<<i<<"! : "<<fact(i);
        cout<<endl;
    }
    return 0;
}