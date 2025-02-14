// WAP to find the smallest missing positive element in the sorted Array 
// that contains only positive
// elements

# include<iostream>
using namespace std;

void missinginteger(int *arr , int size)
{
    bool flag = true;
    int num = arr[0];
    for(int i = 0; i < size ; i++)
    {
        if(arr[i]==num)
        {
            num++;
        }
        if(arr[i] == 1)
        {
            flag = false;
        }
    }
    if(flag == true) cout<<1;
    else if(arr[size-1] == num-1) cout<<num;
    else cout<<num;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    missinginteger(arr,size);
    return 0;
}

// WAP to find the smallest missing positive element in the sorted Array 
// that contains only positive
// elements

# include<iostream>
using namespace std;
void missinginteger(int *arr , int size)
{
    bool flag = true;
    int num = 1;
    for(int i = 0; i < size ; i++)
    {
        if(arr[i]==num)
        {
            num++;
        }
    }
    cout<<num;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    missinginteger(arr,size);
    return 0;
}
