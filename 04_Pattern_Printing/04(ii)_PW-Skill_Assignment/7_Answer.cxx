//    ****
//   ****
//  ****
// ****

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int temp = n-1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= temp ; j++) // spaces
        {
            cout<<" ";
        }
        temp--;
        for(int k = 1 ; k <= n ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}