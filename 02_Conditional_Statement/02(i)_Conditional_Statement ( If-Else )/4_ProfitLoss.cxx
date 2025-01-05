# include<iostream>
using namespace std;
int main(){
    cout<<"Enter Cost Price : ";
    float cp;
    cin>>cp;
    cout<<"Enter Selling Price : ";
    float sp;
    cin>>sp;
    float price;
    if(cp < sp){
        price = sp - cp;
        cout<<"Profit of Rs : "<<price;
    }
    else if(cp > sp){
        price = cp - sp;
        cout<<"Loss of Rs : "<<price;
    }
    else if (cp == sp)
    {
        cout<<"No Profit & No Loss";
    }
    return 0;
}