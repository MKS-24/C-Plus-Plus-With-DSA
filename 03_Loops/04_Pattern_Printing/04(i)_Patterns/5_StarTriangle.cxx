# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int str = 1;  // str = star
    for(int i = 1 ; i <= n ; i++)
    {
        // for(int j = 1 ; j <= str ; j++) cout<<"* ";
        // str++;
// Both Methods are Correct
        for(int j = 1 ; j <= i ; j++) cout<<"* ";
        cout<<"\n";
    }
    return 0;
}