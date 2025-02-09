#include <iostream>
using namespace std;
void digit(int *fd, int *ld, int *n)
{
    for (int i = 1; *n > 0; i++)
    {
        if (i == 1)
        {
            *ld = *n%10;
        }
        *fd = *n;
        *n /= 10;
    }
    return;
}
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int x = n;
    if(n<0) n = -n;
    int fd = 0, ld = 0;
    digit(&fd, &ld, &n);
    cout << "Your Entered Value is : " << x << endl;
    cout << "First Digit is : " << fd << endl;
    cout << "Last Digit is : " << ld << endl;
    return 0;
}