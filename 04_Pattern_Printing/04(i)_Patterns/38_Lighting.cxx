// lightning 🌩 
# include<iostream>
using namespace std;
int main() {
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int x = n+2;
    int y = n+4;

    for(int i = 1 ; i <= 2*n+1 ; i++)
    {
        for(int j = 1 ; j <= 2*n+1 ; j++)
        {
            //if(i+j == x) cout<<"*";
             if(i == n+1) cout<<"*";
            else if(i+j == n+2) cout<<"*";
            else if(i+j == 3*n+2) cout<<"*";
         //   else if(i+j == y &&  i != 1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        x++;
        if(i == 1) continue;
        if(i == n+1)
        {
            y = n+4;
            continue;
        }
        y+=2;
    }
    
    return 0;
}