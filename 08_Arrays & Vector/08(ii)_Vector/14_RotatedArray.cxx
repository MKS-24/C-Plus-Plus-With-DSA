#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(int first , int last,vector<int> &v)
{
    while(first <= last)
    {
        int temp = v.at(first);
        v[first] = v[last];
        v[last] = temp;
        first++;
        last--; 

    }
}
int main()
{
    cout << "Enter Array Size : ";
    int size;
    cin >> size;
    vector<int> v; // vector me hume inbuilt function bht milte hai bhai
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter " << i + 1 << " Element : ";
        cin >> num;
        v.push_back(num);
    }
    int first , last;
    cout<<"Enter First Index : ";
    cin>>first;
    cout<<"Enter Last Index : ";
    cin>>last;
    reverse(first,last,v);
 for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}