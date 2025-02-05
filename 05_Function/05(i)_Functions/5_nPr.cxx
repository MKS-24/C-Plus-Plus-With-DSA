#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int nPr(int n, int r)
{
    return fact(n) /fact(n-r);
}
int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;
    cout << "Enter r : ";
    int r;
    cin >> r;
    cout << "nPr : " << nPr(n, r);
    return 0;
}