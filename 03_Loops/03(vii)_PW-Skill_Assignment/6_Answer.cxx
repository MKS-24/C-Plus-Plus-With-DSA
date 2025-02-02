// Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1;
    int ascii = 65;
    while (i <= 26)
    {
        cout << (char)ascii << " : " << ascii<<endl;
        ascii++;
        i++;
    }
}