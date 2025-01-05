# include<iostream>
using namespace std;
int main(){
    float mark;
    cout<<"Enter Marks : ";
    cin>>mark;

    if(mark >= 91 && mark <= 100) cout<<"Grade : Excellent";
    else if(mark >= 81 && mark < 91) cout<<"Grade : Very Good";
    else if(mark >= 71 && mark < 81) cout<<"Grade : Good";
    else if(mark >= 61 && mark < 71) cout<<"Grade : Can do Better";
    else if(mark >= 51 && mark < 61) cout<<"Grade : Average";
    else if(mark >= 40 && mark < 51) cout<<"Grade : Below Average";
    else if(mark >= 0 && mark < 40) cout<<"Grade : Fail";
    else cout<<"Something went wrong with your marks!!";
    return 0;
}
