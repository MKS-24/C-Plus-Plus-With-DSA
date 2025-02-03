// 2.45 hours me solve howa
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int n;
    cin >> n;
    int temp = 2 * n - 1;
    int num = n;
    int con = 1;
    int con2 = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int y = n;
        if (i >= 2 && i <= 2 * n - 2)
        {
            for (int k = 1; k <= con; k++)
            {
                cout << y << " ";
                y--;
            }
            if (i < n)
                con++;
            else
                con--;
        }
        for (int j = 1; j <= temp; j++)
        {
            cout << num << " ";
        }
        if (i < n)
        {
            num--;
            temp -= 2;
        }
        else
        {
            num++;
            temp += 2;
        }
        y++; // important step..
        if (i >= 2 && i <= 2 * n - 2)
        {
            for (int l = 1; l <= con2; l++)
            {
                cout << y << " ";
                y++;
            }
            if (i < n)
                con2++;
            else
                con2--;
        }

        cout << "\n";
    }
    return 0;
}