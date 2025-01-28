#include <iostream>
using namespace std;
int main()
{
    // for (int i = 2; i <= 10; i += 2)
    // {
    //     cout << i << endl;
    // }

    // Both Methods Are Correct
    for (int i = 1; i <= 10; i++)
    {
        if(i%2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}