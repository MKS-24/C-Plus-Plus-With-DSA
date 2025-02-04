# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    int num = 1;
    int x = 1; // j loop iteration value
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= x ; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
        x++;
    }
    return 0;
}