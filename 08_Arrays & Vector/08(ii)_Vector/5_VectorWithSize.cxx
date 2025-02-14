# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> v(5);  // initial size dediya 5 to abhi ke liye lkn array 5 tak value by default 0 assign ho jaega
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;


    vector<int>k(5,7); // size 5 dediya and each element ki value 7 assign kerwadi
    cout<<k[0]<<endl;
    cout<<k[1]<<endl;
    cout<<k[2]<<endl;
    cout<<k[3]<<endl;
    cout<<k[4]<<endl;
    cout<<k[5]<<endl;
    return 0;
} 