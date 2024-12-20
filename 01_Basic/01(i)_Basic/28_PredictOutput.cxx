# include<iostream>
using namespace std;
int main(){
    int i = 2 , j = 3 , k, l;
    float a, b;
    k = i / j * j; // 0
    l = j / i * i; // 2
    a = i / j * j; // 0 integer operation integer will give answer integer
    b = j / i * i; // 2 integer operation integer will give answer integer
    cout<<k<<" "<<l<<" "<<a<<" "<<b;
    return 0;
}