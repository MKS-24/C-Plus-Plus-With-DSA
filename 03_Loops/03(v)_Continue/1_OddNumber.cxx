# include<iostream>
using namespace std;
int main(){
    for(int i = 1 ; i <= 100 ; i++)
    {
        if(i%2 != 0 ) cout<<i<<"\n";
        else continue; // continue skip kerta hai loop ki iteration ko
    }
    return 0;
}