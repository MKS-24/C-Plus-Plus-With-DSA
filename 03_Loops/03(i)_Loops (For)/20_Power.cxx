#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    cout << "Enter Power : ";
    int p;
    cin >> p;
    bool flag = true;
    if(p < 0) 
    {
        p = -p;
        flag = false;
    }
    float ans = 1; // a is extra;
    for (int i = 1; i <= p; i++)
    {
        ans *= n;
    }
    if(p == 0 && n == 0) cout<<"Undefined!!";
    if(flag == false) ans = 1/ans;
    cout <<n<<" ^ "<< p <<" is : "<< ans;
    return 0;
}