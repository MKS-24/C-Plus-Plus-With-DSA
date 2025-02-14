# include<iostream>
# include<vector>
using namespace std;
void Sortt(vector<int>&nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    int temp;
    while(mid <= high)
    {
       if(nums[mid] == 2)
       {
        temp = nums[mid];
        nums[mid] = nums[high];
        nums[high]=temp;
        high--;
       }
       else if(nums[mid] == 0)
       {
        temp = nums[mid];
        nums[mid] = nums[low];
        nums[low] = temp;
        mid++;
        low++;
       }
       else
        {
            mid++;
        }
       
    }
}

int main(){
    cout<<"Enter size of an Array : ";
    int size;
    cin>>size;
    vector<int>v;
    cout<<"Enter Number !!\n";
    for(int i = 0 ; i < size ; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    Sortt(v);
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }

    return 0;
}