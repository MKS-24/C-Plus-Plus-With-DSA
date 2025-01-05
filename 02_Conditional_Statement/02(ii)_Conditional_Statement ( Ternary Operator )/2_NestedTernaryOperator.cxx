# include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter Marks : ";
    cin>>marks;
//  (Condition)    (                   True                        )(     False    )
//                  (Condition)   (    True     )   (    False    )
    (marks > 33) ? (marks > 50) ? cout<<"Yes 50!" : cout<<"Not 50!" : cout<<"Error"; 
    return 0;
}