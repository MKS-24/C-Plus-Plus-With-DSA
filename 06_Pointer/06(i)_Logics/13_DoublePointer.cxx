# include<iostream>
using namespace std;
int main(){
    // is used o store adress of pointer
    int x = 5;
    int * ptr = &x;
    int* *ptr2 = &ptr;
    int* **ptr3 = &ptr2;

    // different adress 
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value of *ptr : "<<* ptr<<endl<<"Address of x : "<<&x<<endl;
    cout<<"Value of **ptr : "<<**ptr2<<endl<<"Address of **ptr : "<<ptr2<<endl;
    cout<<"Value of ***ptr3 : "<<***ptr3<<endl<<"Address of ***ptr : "<<ptr3<<endl;
    
          // Same Address print kare ga
    cout<<endl<<"Address of x : "<<&x<<endl;
    cout<<endl<<"Address of **ptr : "<<*ptr2<<endl;
    cout<<endl<<"Address of ***ptr : "<<**ptr3<<endl;
    return 0;
}