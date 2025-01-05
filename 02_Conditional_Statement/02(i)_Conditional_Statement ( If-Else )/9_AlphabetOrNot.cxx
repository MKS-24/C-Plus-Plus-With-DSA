# include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    if (ch >= 65 && ch <= 90) cout<<"'"<<ch<<"' is an Capital Alphabet";
    else if(ch >= 'a' && ch <= 'z') cout<<"'"<<ch<<"' is an Small Alphabet"; 
    else cout<<"Not an Alphaet!!";
    return 0;
}
//Hirerechy 
// && is greater than || 