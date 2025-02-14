#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    int size;
    cout << "Enter Size of an Array : ";
    cin >> size;
    vector<int> v;
    cout << "Enter Elements !! ";
    // v.push_back(5);
    for (int i = 0; i < size; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i ; j < size ; j++)
        {
            if ((v.at(i)+v.at(j) ==  target ) && i != j) cout<<"("<<i<<","<<j<<")";
        }
    }
    
}