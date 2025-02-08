//Q2. Write a function to take the radius of a circle as an argument and return its area.
# include<iostream>
# include<math.h>
using namespace std;
float area(float r)
{
    return  3.141 * pow(r,2);
}
int main(){
    cout<<"Enter Radius : ";
    float rad;
    cin>>rad;
    cout<<"Area is : "<<area(rad);
    return 0;
}