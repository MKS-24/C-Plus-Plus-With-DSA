# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;  
    int nsp1 = n-1;
    int nst1 = 1;

// Loop for upper part when n = 4;

    // # # # *
    // # # * * *
    // # * * * * *
    // * * * * * * *
    for(int i = 1 ; i <= n ; i++) 
    {
        // For Spaces
        for(int j = 1 ; j <= nsp1 ; j++) 
        {
            cout<<"  ";  
        }
        nsp1--;
        // For Stars
        for(int k = 1 ; k <= nst1 ; k++)  
        {
            cout<<"* ";
        } 
        nst1 += 2;
        cout<<endl;
    }
    int nsp2 = 1;
    int nst2 = 2*n - 3 ; // Formula for printing stars

// Loop for lower part when n = 4;

    // # * * * * *
    // # # * * * 
    // # # # *

    for(int i = 1 ; i <= n-1 ; i++)
    {
        for(int j = 1 ; j <= nsp2 ; j++) cout<<"  ";
        nsp2++;
        for(int k = 1 ; k <= nst2 ; k++) cout<<"* ";
        nst2 -= 2;
        cout<<endl; 
    }
    return 0;
}
