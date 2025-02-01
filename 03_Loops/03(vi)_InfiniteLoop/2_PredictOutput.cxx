#include <iostream>
using namespace std;
int main()
{
    int i;
    while(i = 10)
    {
        cout<<i<<endl;
        i = i + 1;  // increment kuch kaam nh kare ga loop me just because QK har baar initilize horaha hai
    }
    return 0;
}