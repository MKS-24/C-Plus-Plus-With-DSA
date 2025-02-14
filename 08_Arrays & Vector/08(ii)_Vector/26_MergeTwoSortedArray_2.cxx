# include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 12;
    int y = 43;
    int s1 = x%10;
    x/=10;
    int t1 = x;
    int t2 = y%10;
    y/=10;
    int s2 = y;
    cout<<t1+t2;

    return 0;
}