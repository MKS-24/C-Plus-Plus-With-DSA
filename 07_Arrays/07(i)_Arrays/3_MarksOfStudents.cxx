# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number of Students : ";
    int tn;
    cin>>tn;  // tn = Total Student 
    int mark[tn];
    cout<<"Enter Marks Of Students..\n";
    
    for(int i = 0 ; i < tn ; i++)
    {
        cout<<"Enter for "<<i+1<<" student : ";
        cin>>mark[i];
    }
    for(int i = 0 ; i < tn ; i++)
    {
        if(mark[i] < 35) cout<<"Roll # "<<i+1<<" secure less than 35 Marks!!\n";
    }
    return 0;
}