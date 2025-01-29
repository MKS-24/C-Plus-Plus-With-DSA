# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n; //153
    int x = n; // 153
    int a = n;  // 153

    int arm = 0;
    int count = 0;

    while(n > 0)
    {
        count++;
        n /= 10;
    }
    while ( x > 0 )  
    {
        int ld = x % 10;  
        
        int product = 1;
        for(int j = 1 ; j <= count ; j++)  // count = 3
        {
            product *= ld;  // 27 // 125
        }
        arm += product; // 27 + 125
        x /= 10; //1
    }

    if(a != 1 && a < 10) cout<<"Not Armstrong Number !";
    else if(a == arm) cout<<"Armstrong Number !!";
    else cout<<"Not Armstrong Number !!";
    return 0;
}