# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int temp = 3;
    int nsp = 2 * (n-1) - 1;
    for(int i = 1 ; i <= 2*n ; i++)
    {
        for(int j = 1 ; j <= 2*n-1 ; j++)
        {
            if(i+j == temp && ( i<n || i > n+1 ))  
            {
                for(int k = 1 ; k <= nsp ; k++)
                {   
                    cout<<" ";
                    j++;
                }
            }
            cout<<"*";
        }
        cout<<"\n";
        if(i==n-1)
        {
            temp += 3;
            nsp = 1;           
        }
        if(i<n-1)
        {
            temp += 2;
            nsp -= 2;
        }
        else if(i>n+1) 
        {
            nsp += 2;
        }
    }
    return 0;
}