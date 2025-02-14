#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> & arr) // Same array gets by using "&"
{
    arr[0] = 7;
}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(6);
    v.push_back(2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v); // vector pass by Refference hogaya hai
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}