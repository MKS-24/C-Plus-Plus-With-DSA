#include <iostream>
using namespace std;
int main()
{
    bool x = false;
    bool y = false;
    bool z = true;
    cout<<(x == y == z);
    // Left to Right jata 
    // x == y then result == z
    return 0;
}