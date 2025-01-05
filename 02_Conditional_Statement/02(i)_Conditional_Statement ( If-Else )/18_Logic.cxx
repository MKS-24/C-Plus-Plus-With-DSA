#include <iostream>

#include <stdio.h>

int main()

{

    if (!(std::cout << "hello"))

        std::cout << " world";

    else

        std::cout << " nothing";

    return 0;
}