// 4
// 6
// ******
// *    *
// *    *
// ******

# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Row : ";
    int r;
    cin>>r;
    cout<<"Enter Colume : ";
    int c;
    cin>>c;

    for(int i = 1 ; i <= r ; i++)
    {
        for(int j = 1 ; j <= c ; j++)
        {
            if(i >= 2 && i <= r-1 && (j == 1 || j == c)) cout<<"*";
            else if(i == 1 || i == r) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}