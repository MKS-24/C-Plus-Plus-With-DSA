#include <iostream>
using namespace std;
int main()
{
    int AP = 100;
    // Basically Loop ko Repiitation ke liye use kerte
    // for (int i = 1; AP > 0; i++)
    // {
    //     if (AP == 1)
    //         cout << AP;
    //     else
    //         cout << AP << ",";
    //     AP -= 3;
    // }

 // Another Method
 
    // for (; AP > 0;)
    // {
    //     if (AP == 1)
    //         cout << AP;
    //     else
    //         cout << AP << ",";
    //     AP -= 3;
    // }

 // Another Method

    for (int i = 100 ; i>0 ; i -= 3)
    {
        if (i == 1)
            cout << i;
        else
            cout << i << ",";
    }
    return 0;
}