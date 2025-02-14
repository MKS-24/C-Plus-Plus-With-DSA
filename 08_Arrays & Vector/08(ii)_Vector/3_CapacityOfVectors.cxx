
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(6);
    cout << arr.capacity() << endl; // capacity

    arr.push_back(9);
    cout << arr.capacity() << endl; // capacity

    arr.push_back(5);
    cout << arr.capacity() << endl; // capacity

    arr.push_back(1);
    cout << arr.capacity() << endl; // capacity

    arr.push_back(5);
    cout << arr.capacity() << endl; // capacity

    return 0;
}