// Q1. Print all the odd numbers from 1 to 100
# include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    while(i<=100)
    {
        if(i%2 != 0) cout<<i;
        i++;
    }
    return 0;
}