# include<iostream>
# include<vector>
using namespace std;

void rotate(vector<int> &v , int templocation)
{
    vector<int>arr;
    for(int i = 0 ; i < templocation ; i++)
    {
        arr.push_back(v.at(i));
    }
    bool flag = false;
    for(int i = 0 , j = templocation; i < v.size() ; i++ , j++)
    {
        if(j < v.size()) v[i] = v[j];
        else if (j == v.size()) 
        {
            j=0;
            flag = true; 
        }
        if(flag == true) v[i] = arr[j];
    }
}
int main(){
    cout<<"Enter Array Size : ";
    int size;
    cin>>size;
    vector<int>v;
    cout<<"Enter Numbers!!\n";
    for(int i = 0 ; i < size ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter 'k' Note K can be greater than size of array : ";
    int k;
    cin>>k;
    if(k>v.size())
    k %= v.size(); // imp line
    int templocation;
    int vecsize = v.size() - 1;
    for(int i = 1 ; i <= k ; i++)
    {
        templocation = vecsize;
        vecsize--;
    }
    rotate(v,templocation);
    for(int i = 0 ; i < v.size() ; i++ )
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}