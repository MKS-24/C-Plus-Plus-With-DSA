# include<iostream>
using namespace std;
int sum(int x , int y);
int main(){
    cout<<"Enter First Number : ";
    int n1;
    cin>>n1;
    cout<<"Enter Second Number : ";
    int n2;
    cin>>n2;

    cout<<sum(n1,n2); // argument kehte inside braket jo value jaati
    cout<<endl<<sum(1,0);
    cout<<endl<<sum(1.2,5); // 6 bcz 1.2 ka int banta hai 1 and 1+5 = 6
    cout<<endl<<sum(2*4,5/2); // 8+2 = 10
    return 0;
}

int sum(int x , int y){
    return x + y;
}