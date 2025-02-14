# include<iostream>
using namespace std;
int main(){
    int num[26], temp ;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];
    num[25] = num [0];
    num[0] =  temp;
    int khan;

    cout<<endl<<num[0]<<" "<<num[25];
    return 0;
}


// array ke baad program me hum kuch bhi initialize kerte hai tu wo array ke address ke peeche ki space occupy kerta hai..
// jese ager array ki address 0x61fea8 hai
// and us ke baad program me hum kuch initialize kerte hai like int x;
// tu x ka address 0x61fea4 hoga jo ke array ke adress se four bytes peeche store kerta hai