# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin >> n;

    if(n % 10 == 0)  // (1 - 2) + (3 - 4) // -1 -1  = -2
        cout<<-n/2;
    else cout<< -n/2 + n;
    return 0;
}