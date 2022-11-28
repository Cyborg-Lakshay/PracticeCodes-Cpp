
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7


#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<5;i++)
    {
        int count = i;
        for(int j=1;j<5;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}