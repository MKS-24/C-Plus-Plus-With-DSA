# include<iostream>
using namespace std;
void fun(int x = 7 ,float y = 10) 
{
    cout<<"x  Value: "<<x<<endl; // 7 is default value of x
    cout<<"y  Value : "<<y; // 10 is default value of y
    return;
    }
int main(){
    int x = 5;
    int y = 4;
    fun(2); // left to right jaaege mean outside function me formal parameter ke 1st variable me assign hogi 
    return 0;
}