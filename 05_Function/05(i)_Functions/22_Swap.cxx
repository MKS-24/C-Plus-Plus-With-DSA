#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Enter first Number(n1) : ";
    cin >> n1;
    cout << "Enter Second Number(n2) : ";
    cin >> n2;

    n1 = n1 + n2; // n1 = 1 + 2
    n2 = n1 - n2; // n2 = 1 + 2 - 2 = 1 // n2 = 1
    n1 = n1 - n2; // 1 + 2 - 1
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
    return 0;
}
