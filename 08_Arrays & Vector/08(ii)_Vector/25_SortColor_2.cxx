// Problem 75  baad me daalna
#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums)
{
    int one = 0, zero = 0, two = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zero++;
        else if (nums[i] == 1)
            one++;
        else
            two++;
    }
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(i<zero) nums[i] = 0;
        else if(i < zero+one) nums[i] = 1;
        else nums[i] = 2;
    }
}
int main()
{
    int size;
    cout << "Enter Size of an Array : ";
    cin >> size;
    vector<int> v;
    cout << "Enter Numbers !!\n";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sortColors(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}