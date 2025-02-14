#include <iostream>
# include<vector>
using namespace std;
void rev(vector<int> &v , int f , int l){
    for(int i = f , j = l , temp = 0 ; temp <= (l-f) / 2 ; i++ , j-- , temp++) // formula banaya -> temp <= (l-f) / 2
    {
        swap(v.at(i),v.at(j));  // By Using Swap Function
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