# include<iostream>
using namespace std;

void Star(int n){
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return ;
}
int main(){
    cout<<"Enter Number : ";
    int n;
    cin >> n;
    Star(n);
    cout<<"Benefit of Function"<<endl ;
    Star(n+1);
    cout<<"Dekhre hu na!"<<endl;
    Star(n+2);
    return 0;
}