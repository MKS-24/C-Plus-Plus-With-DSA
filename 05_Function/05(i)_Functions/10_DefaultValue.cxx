# include<iostream>
using namespace std;
void fun(int x = 7 ,int y = 10) 
{
    cout<<"x  Value: "<<x<<endl; // 7 is default value of x
    cout<<"y  Value : "<<y; // 10 is default value of y
    return;
    }
int main(){
    int x = 5;
    int y = 4;
    fun(); // Data type nh likhsakhte formal variable me
    return 0;
}