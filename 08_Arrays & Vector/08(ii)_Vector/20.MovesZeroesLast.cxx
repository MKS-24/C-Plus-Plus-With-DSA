// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int t = 0;
    int size = nums.size() - 1;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) 
    {                                     
        if(nums[i] != 0)
        {
            nums[t] = nums[i];
            t++;
        } 
        else{
            count++;
        }
    }
    for(int i = 0; i < count ; i++)
    {
        nums[size] = 0;
        size--; 
    }
}
int main()
{
    cout << "Enter Array Size : ";
    int size;
    cin >> size;
    vector<int> nums;
    cout << "Enter Numbers!!\n";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
