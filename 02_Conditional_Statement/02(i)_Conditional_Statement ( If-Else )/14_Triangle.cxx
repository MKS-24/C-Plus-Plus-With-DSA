#include <iostream>
using namespace std;
int main()
{
    float s1, s2, s3;
    cout << "Enter 1st Side : ";
    cin >> s1;
    cout << "Enter 2nd Side : ";
    cin >> s2;
    cout << "Enter 3rd Side : ";
    cin >> s3;
// Sum of two sides greater than the third side
    if((s1 + s2  > s3) && (s1 + s3  > s2) && (s3 + s2  > s1)) cout<<s1<<","<<s2<<","<<s3<<", are the sides of Triangle";
    else cout<<s1<<","<<s2<<","<<s3<<", are not the sides of Triangle";
    return 0;
}
