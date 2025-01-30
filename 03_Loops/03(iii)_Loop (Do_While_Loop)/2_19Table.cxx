# include<iostream>
using namespace std;
int main(){
    int table = 19;
    int i = 1;
    do{
        if(i == 10) cout<<"19 x "<<i<<" = "<<table;
        else cout<<"19 x "<<i<<" = "<<table<<endl;
        table += 19;
        i++;

    } while(i<=10);
    return 0;
}