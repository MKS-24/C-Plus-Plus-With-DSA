# include<iostream>
# include<vector>
using namespace std;

void rev(vector<int> v)
{
    vector<int> temp;
    
    for(int i = 0 , revvalue = v.size() - 1 ; i < v.size() ; i++,revvalue--)
    {
       temp.push_back(v.at(revvalue));
    }
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<temp.at(i)<<" ";
    }
    return;
}
int main(){
    cout<<"Enter Array Size : ";
    int size;
    cin>>size;
    vector<int>v;
    for(int i = 0 ; i < size ; i++)
    {
        int num;
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>num;
        v.push_back(num);
    }
    
    rev(v);  // benifit dekhu vector ka size pass nh kiya lkn array use kerte tu size bhejna parhta
    return 0;
}