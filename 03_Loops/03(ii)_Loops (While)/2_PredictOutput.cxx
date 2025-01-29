# include<iostream>
using namespace std;
int main(){
    int j; // not work just ecuse of not assingning any value in "j"
    while(j <= 10){
        cout<<j<<endl; 
        j = j + 1;
    }
 // j me Garbage value hai
    return 0;
}