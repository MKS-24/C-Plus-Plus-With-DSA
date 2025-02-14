// Leet code 88
#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> &v1,int m , vector<int> &v2 ,  int n )
{
    int i, j, k;
    i = m - 1;
    j = n - 1;
    // int x = v1.size() - 1;
    k = v1.size() - 1;

    while (k >= 0)
    {
        if (i < 0)
        {
            v1[k] = v2[j];
            k--;
            j--;
        }
        else if (j < 0)
        {
            v1[k] = v1[i];
            k--;
            i--;
        }
        else if (v1[i] < v2[j])
        {
            v1[k] = v2[j];
            k--;
            j--;
        }
        else if (v1[i] > v2[j])
        {
            v1[k] = v1[i];
            k--;
            i--;
        }
        else if (v1[i] == v2[j])
        {
            v1[k] = v2[j];
            k--;
            j--;
        }
    }
}
int main()
{
    vector<int> v1 = {1, 1, 5, 8, 0, 0, 0, 0};
    vector<int> v2 = {0, 5, 5, 8};
    int m = v1.size()-v2.size() , n = v2.size();
    fun(v1,m, v2,n);
    if (v1.size() > v2.size())
    {
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
    }
    return 0;
}