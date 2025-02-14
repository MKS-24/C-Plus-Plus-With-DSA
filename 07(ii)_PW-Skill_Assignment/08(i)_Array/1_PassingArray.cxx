# include<iostream>
using namespace std; 
void display(int a[])  // index size nh dete
{
    cout<<"Size "<<sizeof(*a)<<endl; // array ka size nh deraha first element ka size deraha
    // size alag se dena hoga 
    for(int i = 0 ; i < 4 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void change(int* b){ // isko me istarha bhi likh sakhta hu int b []
    b[0] = 100;      // * and [] 1 saath nh asakhte
}
int main(){
    int arr[] = {1,2,3,4,5,5};
    cout<<"Main me : "<<sizeof(arr)<<endl;
    // accessing the elements of an array in another function
    //updation , pass by value or refference?
    //only reffernce hota


    // display(&arr[0]);
    display(arr); // this is best method


    change(arr);
    display(arr);
    return 0;
}