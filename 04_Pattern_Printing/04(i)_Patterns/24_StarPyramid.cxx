//Dificult Method of Star Pyramid
# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number : ";
    int n ; 
    cin >> n;
    int nsp = n-1;
    int nst = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= nsp ; j++)
        {
            cout<<"  ";
        }
        nsp--;
        for(int k = 1 ; k <= nst ; k++)
        {
            cout<<"* ";
        }
        for(int l = 2 ; l <= nst ; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
        nst++;
    }
    return 0;
}