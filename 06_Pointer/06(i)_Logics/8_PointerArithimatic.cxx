# include<iostream>
using namespace std; 
void fun(int &g);
int main(){
    
    // case 1 

    // int x = 5;
    // int* ptr = &x;
    // cout<<ptr<<endl; // 0x61ff08
    // ptr++; // Adress me data type ka size means 4 + kerdu
    // cout<<ptr<<endl; //0x61ff0c

    //case 2
    // bool y = 6;
    // bool* pt = &y;
    // cout<<pt<<endl; //0x61ff0b
    // pt++; // Adress me 1 + kerdu
    // cout<<pt<<endl; //0x61ff0c  

    // Case 3
    // int z = 7;
    // int* p = &z;
    // cout<<* p;
    // p++;
    // cout<<endl<<*p;  // garbage value aajae gi

    // case 4 6422284
    // *p++; // ye method thk nh hai
    // (*p)++; // ye method thk hai   jis me value me addition ho rahahai
    // cout<<*p;


    int g = 12;
    int* gtr = &g;
    fun(*gtr);    // alias method
    cout<<g;

    return 0;
}
// anothe case by alias
void fun(int &g)
{
    g = g+10;
    return;
}
