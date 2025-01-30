# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    int table = n;
    int i = 1;
    do
    {   
        if(i == 10) cout<<n<<" x "<<i<<" = "<<table;
        else cout<<n<<" x "<<i<<"  = "<<table<<endl;
        table += n;
        i++;
    }while(i<=10);
    return 0;
}