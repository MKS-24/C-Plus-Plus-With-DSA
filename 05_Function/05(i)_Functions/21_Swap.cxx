#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Enter first Number(n1) : ";
    cin >> n1;
    cout << "Enter Second Number(n2) : ";
    cin >> n2;
    float temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
    return 0;
}
