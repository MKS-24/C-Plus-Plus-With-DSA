#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Capital Character : ";
    char ch;
    cin >> ch;
    int num = (int)ch;
    int place = num - 64;
    cout<< "Given Alphabet is "<<place<<" Position";
    return 0;
}