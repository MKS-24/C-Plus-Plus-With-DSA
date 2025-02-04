#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Rows : ";
    int r;
    cin >> r;
    cout << "Enter Colume : ";
    int c;
    cin >> c;

    for(int i = 1 ; i <= r ; i++) // 'i' is for row 
    {
        for(int j = 1 ; j <= c ; j++) // 'j' is for Colume
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
    return 0;
}