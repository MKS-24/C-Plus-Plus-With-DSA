 # include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr = arr;
    for(int i = 0 ; i < 5 ; i++){
        cout<<&ptr[i]<<" : "<<i[ptr]<<endl;
        // cout<<&i[ptr]<<" : "<<ptr[i]<<endl;// bothe method is correct
    }
    cout<<endl<<"By using Derefference Operator.."<<endl;
    *ptr = 9; // mean arr[0] = 9
    ptr++; // mean arr increase fron 0 to 1
    *ptr = 10; //arr[1] = 10;
    ptr--; // mean arr decrease from 1 to 0

    for(int i = 0 ; i < 5 ; i++){
        cout<<ptr<<" : "<<&ptr[i]<<":"<<i[ptr]<<endl;  // array ke element per ptr ko hover ker ke samjho
        ptr++;    
    }
    //ptr ab array ko point nh kerraha qk ptr me adress ab kuch orr store hai  isliye dobara
    ptr = arr;
    return 0;
}