//Q3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input
# include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    int i = 1;
    while(i<=10)
    {
       cout<<n<<" x "<<i<<" = "<<n*i<<endl;
       i++;
    }
    return 0;
}