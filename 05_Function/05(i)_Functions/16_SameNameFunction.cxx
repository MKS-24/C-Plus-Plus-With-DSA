#include <iostream>
using namespace std;
void fun() // Formal Parameter
{
    int y = 9;
    cout<<y<<endl;
    return;
}

void fun(int x , float y){
    cout<<"hello"<<endl;
    return ;
}
int fun(char ch){
    cout<<"ch"<<endl;
    return ch;
}
int main()
{
    cout<<fun('s');
    return 0;
}