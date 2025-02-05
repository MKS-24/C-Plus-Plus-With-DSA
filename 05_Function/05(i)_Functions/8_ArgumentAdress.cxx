# include<iostream>
using namespace std;
void fun(int n,int x) // Formal Parameter
{
    cout<<"x  argument Adress: "<<&x<<endl<<"n Argument Adress : "<<&n<<endl;
    return;
    }
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int x = 5;
    fun(n,x); // Actual Perameter
    cout<<"x Adress: "<<&x<<endl<<"n Adress : "<<&n;

    return 0;
}