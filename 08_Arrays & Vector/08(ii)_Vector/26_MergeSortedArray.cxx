# include<iostream>
# include<vector>
using namespace std;

vector<int> fun(vector<int>v1 , vector<int>v2)
{
    vector<int> v3;
    int iteration=0;
    for(int i = 0 , j = 0; iteration < v1.size()+v2.size() ; iteration++)
    {
        if(i == v1.size())
        {
            v3.push_back(v2[j]);
            j++;
        }
        else if(j == v2.size())
        {
            v3.push_back(v1[i]);
            i++;
        }

        else if(v1[i] < v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else if(v2[j] < v1[i])
        {
            v3.push_back(v2[j]);
            j++;
        }
        else if(v1[i] == v2[j])
        {
            v3.push_back(v1[i]);
            v3.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return v3;
}

int main(){
    vector<int> v1 = {2,4,5,15};
    vector<int> v2 = {2,2,6,7,10};
    vector<int> v3 = fun(v1,v2);
    for(int i = 0 ; i < v1.size()+v2.size() ; i++)
    {
        cout<<v3[i]<<" ";
    }
    return 0;
}