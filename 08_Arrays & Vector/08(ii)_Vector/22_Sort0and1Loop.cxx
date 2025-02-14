#include <iostream>
#include <vector>
using namespace std;

void zando(vector<int> &v) // zando mean zero and one
{ 
    int n = v.size();
    int i = 0 ;
    int j = n-1;
    while(i < j)
    {
        if(v[i]==1 && v[j]==0)
        {
            v[i] = 0;  // swaping
            v[j] = 1;  // swaping
            i++;
            j--;
        }
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
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