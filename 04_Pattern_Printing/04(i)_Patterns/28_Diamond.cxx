# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;  
    int row = 2*n-1; 
    int nsp = n-1; 
    int nst = 1; 
    for(int i = 1 ; i <= row ; i++) 
    {
        // For Spaces
        for(int j = 1 ; j <= nsp ; j++) 
        {
            cout<<"  ";  
        }
        if(i >= n) nsp++;  
        else nsp--;  

        // For Stars
        for(int k = 1 ; k <= nst ; k++)  
        {
            cout<<"* ";
        }
        if(i >= n) nst -= 2;  
        else nst +=2;   
        cout<<endl;
    }
    return 0;
}
