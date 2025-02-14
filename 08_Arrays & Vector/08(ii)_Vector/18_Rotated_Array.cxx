#include <iostream>
#include <vector>
using namespace std;
void rev(vector<int>&v)
{
    int i = 0; 
    int j = v.size()-1;
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

}
void fun(vector<int> &v, int n)
{
    int i = 0;
    int j = v.size() - n - 1;
    int k = j+1;
    int last = v.size() - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
        if (i < n)
        {
            if(k<=last){
                int x = v[k];
                v[k] = v[last];
                v[last] = x;
                k++;
                last--;
            }
        }
    }
    rev(v);
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k;
    cout << "Enter K : ";
    cin >> k;
    if(k>v.size()) k=k%v.size(); 
    if (k==v.size()) k=0;
    fun(v, k);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}