# include<iostream>
# include<vector>
using namespace std;
int main(){
    // push_back vector me value dalta hai
    // Pop_back vector me value ghata ta hai
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    // cout<<"Values..."<<endl;
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"After PopBack ..."<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.push_back(100); //yaha mene update ki hai value ko
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
     for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}