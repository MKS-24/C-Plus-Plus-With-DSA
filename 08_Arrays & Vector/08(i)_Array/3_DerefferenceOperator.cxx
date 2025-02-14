// ager hume derefference ke through print kerna hai array ko tu ye karege..
 # include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr = arr;
    for(int i = 0 ; i < 5 ; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl<<"By using Derefference Operator.."<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<ptr<<" : "<<*ptr<<endl;
        ptr++; // address 4 se barha
    }
    // ptr++;
    cout<<endl<<ptr; // 0x61ff08 difference 8 ka isliye QK loop ke end me bhi ptr++ horaha mean 0 se 4 waha howa and 4 se 8 isse upper line me howa
    return 0;
}