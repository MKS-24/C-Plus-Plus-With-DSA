// Q8. Print first ‘n’ fibonacci numbers.
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int sum = 1 , a = 0 , b = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<sum <<" ";
        sum = a + b; // 2
        a = b; // 1
        b = sum;
    }

    return 0;
}