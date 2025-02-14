#include <iostream>
# include<vector>
using namespace std;
void rev(vector<int> &v , int f , int l){
    for(int i = f , j = l ; i < j ; i++ , j--)
    {
        int temp = v[i];
        v[i] = v[j]; // Without using Swap Function
        v[j] = temp;
    }
}
int main()
{
    int size;
    cout<<"Enter Size of an Array : ";
    cin>>size;
    vector<int> v;
    cout<<"Enter Number in the Array : ";
    for(int i = 0 ; i < size ; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    cout<<"Enter Starting Index : ";
    int f;
    cin>>f;    
    cout<<"Enter Ending Index : ";
    int l;
    cin>>l;
    rev(v,f,l);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<v.at(i)<<" ";
    }

    return 0;
}