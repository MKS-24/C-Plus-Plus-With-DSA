#include <iostream>
#include <vector>
using namespace std;

void zando(vector<int> &v) // zando mean zero and one
{ // 0 1 0 1 0 1
//   0 1 2 3 4 5
    int count = 0;
    int end = v.size()-1;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i] != 0) count++;
        v[i] = 0;
    }
    for(int i = 0 ; i < count ; i++)
    {
        v[end] = 1;
        end--;
    }

}
int main()
{
    cout << "Enter Size of an Array : ";
    int size;
    cin >> size;
    vector<int> v;
    cout << "Enter Element : ";
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    zando(v);
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}