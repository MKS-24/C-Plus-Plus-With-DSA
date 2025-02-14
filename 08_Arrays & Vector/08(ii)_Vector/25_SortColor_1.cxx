// Problem 75  baad me daalna
# include<iostream>
# include<vector>
using namespace std;
void sortColors(vector<int>&nums)
{
    int zero = 0;
    int one = 0;
    vector<int>arr = nums;
    int size = nums.size() - 1;
    int x = zero ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(arr[i] == 0)
        {
           nums[zero] = 0;
           zero++;
        } 
        else if(arr[i] == 1)
        {
            one++;
        }
        else if(arr[i] == 2)
        {
            nums[size] = 2;
            size--;
        }
    }
    for(int i = zero ; i < size+1 ; i++)
    {
        nums[i] = 1;
    }
}
int main(){
    int size;
    cout<<"Enter Size of an Array : ";
    cin>>size;
    vector<int> v;
    cout<<"Enter Numbers !!\n";
    for(int i = 0 ; i < size ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortColors(v);
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}