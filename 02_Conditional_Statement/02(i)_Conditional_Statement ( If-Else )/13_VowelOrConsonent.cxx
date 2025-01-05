#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Character : ";
    char ch;
    cin >> ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout <<"Character '" << ch <<"' is vowel !!";
    }
    else cout<<"Character '" << ch <<"' is Consonent !!";
    }
    else cout<<"Character '" << ch <<"' is not Consonent or Vowel !!";
    return 0;
}