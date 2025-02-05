// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        int num = 1;
        for(int j = 1 ; j <= i ; j++)
        {
            if(i%2 == 0) cout<<char(num+64)<<" ";
            else cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
