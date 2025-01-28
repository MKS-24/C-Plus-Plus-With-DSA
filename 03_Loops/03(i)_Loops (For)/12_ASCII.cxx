# include<iostream>
using namespace std;
int main(){

    int ascii = 65;  // A = 65
    // for (int i = 1 ; i<=26 ; i++)
    // { 
    //     cout<<(char) ascii <<" : "<<ascii <<endl;
    //     ascii++;
    // }


// Both methods are Correct


    // for (int i = 1 ; ; i++)
    // { 
    //     if(ascii == 91) break;
    //     cout<<(char) ascii <<" : "<<ascii <<endl;
    //     ascii++;
    // }

    for (int i = 65 ; i <= 90 ; i++)
    { 
        cout<<(char) i <<" : "<<i <<endl;  // Typecast
    }
    return 0;
}