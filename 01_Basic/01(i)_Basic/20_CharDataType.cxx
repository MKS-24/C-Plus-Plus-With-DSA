#include <iostream>
using namespace std;
int main()
{
    // Capital Alphabet
    char CH = 'A';
    char CH2 = 'Z';
    // Small Alphabet
    char ch = 'a';
    char ch2 = 'z';
    // Number as a character
    char zero = '0';
    char Nine = '9';

    int ASCII = (int)CH; // Type casting Samll Alphabet
    int ASCII2 = (int)CH2;
    int ascii = (int)ch; // Type casting Capital Alphabet
    int ascii2 = (int)ch2;
    int asciiNum = (int)zero; // Type casting Number
    int ascii2Num = (int)Nine;

    cout << CH << " = " << ASCII;
    cout << endl<< CH2 << " = " << ASCII2;
    cout<< endl << ch << " = " << ascii;
    cout << endl<< ch2 << " = " << ascii2;
    cout<< endl << zero << " = " << asciiNum;
    cout << endl<< Nine << " = " << ascii2Num;
    return 0;
}