#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // d.pop_back();
    // d.pop_front();
    //     for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;
}
