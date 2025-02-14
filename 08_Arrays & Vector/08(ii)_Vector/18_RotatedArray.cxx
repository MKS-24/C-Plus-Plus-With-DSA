# include<iostream>
# include<vector>
using namespace std;
void reversepart(int initial , int final , vector<int> &v)
{
    while(initial <= final)
    {
        int temp = v[initial];
        v[initial] = v[final];
        v[final] = temp;
        initial++;
        final--;
    }
    return;
}
void display(vector<int>&v){
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    return;
}
int main(){
    // cout<<"Enter Array Size : ";
    // int size;
    // cin>>size;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // cout<<"Enter Numbers!!\n";
    // for(int i = 0 ; i < size ; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    cout<<"Enter 'k' Note K can be greater than size of array : ";
    int k;
    cin>>k;
    //rotating
    if(k>v.size()) k %= v.size();
    int n = v.size();
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
    return 0;
}
