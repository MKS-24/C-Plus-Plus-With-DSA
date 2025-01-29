#include <iostream>
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)// 4 time loop chalega
    { 
        if (x == y)
            break;
        else std::cout << x << " " << y << std::endl; // when we dont use using namespace std then std is used before some thing
        x--; // 3
        y++; // 1
    }
    return 0;
}
// 4 0 
// 3 1
