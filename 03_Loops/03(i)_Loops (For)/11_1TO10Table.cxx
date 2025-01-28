# include<iostream>
using namespace std;
int main(){
    int one = 1 , two = 2 ,three = 3, four = 4 ,five = 5, six = 6, seven = 7 , eight = 8 , nine = 9 , ten = 10;
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<" "<<six<<" "<<seven<<" "<<eight<<" "<<nine<<" "<<ten<<" "<<endl;
        one += 1  , two += 2 ,three += 3, four += 4 ,five += 5, six += 6, seven += 7 , eight += 8 , nine += 9 , ten+=10;
    }
    return 0;
}