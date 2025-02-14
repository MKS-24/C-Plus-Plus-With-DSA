# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    cout<<"Enter Array Size : ";
    int size;
    cin>>size;
    vector<int>v;  // vector me hume inbuilt function bht milte hai bhai
    for(int i = 0 ; i < size ; i++)
    {
        int num;
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>num;
        v.push_back(num);
    }
    reverse(v.begin(),v.end());
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}