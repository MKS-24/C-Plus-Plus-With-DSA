
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr; // you not need to mention the size
    arr.push_back(6); 
    cout<<arr.size()<<endl; // size
    arr.push_back(9); 
    cout<<arr.size()<<endl; // size
    arr.push_back(5);
    cout<<arr.size()<<endl; // size
    arr.push_back(1);
    cout<<arr.size()<<endl; // size

    return 0;
}