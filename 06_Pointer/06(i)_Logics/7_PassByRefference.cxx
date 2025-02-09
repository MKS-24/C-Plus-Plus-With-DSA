# include<iostream>
using namespace std;
void swapii(int &x , int &y) // Pass by Reference
{
    int temp = x;
    x = y;
    y = temp;
    return ; 
}
int main(){
    int x = 4;
    int y = 5;
    // swapii(x,y);
    swap(x,y);  // inbuilt function hai
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}
// this is alias(is method me adrees ke through access krte)