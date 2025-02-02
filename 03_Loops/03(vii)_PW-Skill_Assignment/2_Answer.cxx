// Q2. Print all numbers from 1 to 100 that are divisible by 3
# include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    while(i<=100)
    {
        if(i%3 == 0)cout<<i;
        i++;
    }
    return 0;
}