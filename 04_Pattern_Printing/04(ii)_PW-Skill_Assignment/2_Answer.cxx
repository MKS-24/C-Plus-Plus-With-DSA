// 1 2 3 4
// 1 2 3
// 1 2
// 1
# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    int num = n;
    for(int i = 1 ; i<= n ; i++)
    {
        for(int j = 1 ; j <= num ; j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        num--;
    }
    return 0;
}
