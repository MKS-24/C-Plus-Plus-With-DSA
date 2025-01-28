// Wo Number Jo one ke or khud ke table me aae;

# include <iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n;
    cin>>n;

    int count = 0;
    for(int i = 1 ; i <= n ; i++)  // 1 mean ke condition true hai
    {
        if(n%i == 0) count ++;   
    }
    
    if(count == 2 ) cout<<n<<" is Prime!"; // count == 2 isliye qk loop me 1 and the number which user input se divisible hai
    else if(n == 1 ) cout<<n<<" is neither prime nor composite";
    else cout<<n<<" is not Prime!";
    
    return 0;
}