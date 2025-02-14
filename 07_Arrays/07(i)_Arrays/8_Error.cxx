//Find Error
# include<iostream>
using namespace std;
int main(){
int size  ;    
cin>>size;
int arr[size];
for(int i = 1 ; i <= size ; i++)  // i ka index 0 se start hoga
{ 
   cin>>arr[i];
   cout<<i<<" Value : "<<&arr[i]<<endl;
}     
    return 0;
}