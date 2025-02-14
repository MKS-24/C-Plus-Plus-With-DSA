# include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter an Array size : ";
    cin>>size;
    int array[size];
    cout<<"Ok!!\n";

    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>array[i];
    }
    int max=0;
    bool flag = false;
    for(int i = 0 ; i < size ; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            flag = true;
        }
    }
    if(flag == true)
    cout<<"Maximum value is : " << max;
    else cout<<"No one in maximum!!";

    return 0;
}