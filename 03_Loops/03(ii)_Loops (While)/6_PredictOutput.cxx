# include<iostream>
int main(){
    int x = 4 , y = 0 , z;
    while(x >= 0){  // 4 time loop chalega
        x--; // 3 2 1 0 -1
        y++; // 1 2 3 4  5
        if(x == y)
        continue;
        else std::cout<<x<<" "<<y<<std::endl;  // when we dont use using namespace std then std is used before some thing
    }
    return 0;
}
// 3 1
// 1 3
// 0 4
// -1 5