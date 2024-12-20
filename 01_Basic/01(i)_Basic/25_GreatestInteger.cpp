# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Real Number : ";
    float n;
    cin >> n;  //1.5
    int num = (int) n;
    if(n<0) num -=  1 ;  
    cout<<"Greatest Integer : "<<num;;
    return 0;
}