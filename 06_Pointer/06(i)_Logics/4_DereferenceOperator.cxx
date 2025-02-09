# include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<x<<endl;
    int y = 5;
    int* p =&x;
    *p = 6;
    cout<<x;
    return 0;
}