# include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter Marks : ";
    cin>>marks;
    int x = marks > 50 ? 70 : 0;  // Main Thing of this program
    cout<<x;
    return 0;
}