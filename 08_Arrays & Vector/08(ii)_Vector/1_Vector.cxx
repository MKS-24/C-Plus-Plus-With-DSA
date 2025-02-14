//vector dynamic array hota hai
// manlu arr[2] = {0,1} ye aik array hai jis ka size 2 hai
// tu is array ko me aese nh likh sakhta arr[2] = {1,2,4} qk size out of bound hai
//ye problem hamari vector khtm kerdeta hai
# include<iostream>
# include<vector>
using namespace std;
// array ke liye arr or vector ke liye v use kerliya karo assani ke liye
int main(){
    vector<int>arr; // you not need to mention the size

    // jab size na de mean vector banale to [] bracket use nh kare ge
//    like this // arr[0] = 1;
    // cout<<arr[1]<<endl; segmentation fault aaega

    // jab size na de mean vector banale to push back kerne hai
    
    arr.push_back(6); // arr[0]
    
    arr[1] = 1; // pushback size increase kerta hai arr[1] nh 
    
    arr.push_back(9); //arr[1] = 9
   
    arr.push_back(0);
    
    arr[2] = 4;  // yaha update horahi hai value
    
    arr.push_back(1);


    // print or update kerne ke liye karane ke liye [] use kerege
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    // // arr[2] = 5;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    return 0;
}



// Diagram banaker smajh size double kerke samjh aajae ga inshallah