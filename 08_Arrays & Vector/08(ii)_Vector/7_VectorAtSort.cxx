#include <iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(6);
    v.push_back(2);

    v.at(0) = 99; //  for updation
    
    // first method to print
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << "By using v.at(i)" << endl;
    // Second Method to print
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout<<endl; 

    sort(v.begin(),v.end());

    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}