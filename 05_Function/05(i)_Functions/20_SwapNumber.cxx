# include<iostream>
using namespace std;

float swap(float n1 , float n2);  // void se kerna zyada behtar hai QK value aevi return horahi hai

int main(){
    float n1,n2;
    cout<<"Enter first Number(n1) : ";
    cin>>n1;
    cout<<"Enter Second Number(n2) : ";
    cin>>n2; 
    swap (n1,n2);  // Pass by Value
    return 0;
}

float swap(float n1 , float n2){
    float temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<"n1 : "<<n1<<endl; 
    cout<<"n2 : "<<n2<<endl; 
    return 1;
}