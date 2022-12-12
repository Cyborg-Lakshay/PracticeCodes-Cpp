#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l;
    
    l.push_back(1);
    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    list<int> n(5,100);

    for(int i:n)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    n.erase(n.begin());

    for(int i:n)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    n.pop_back();
    n.pop_front();

        for(int i:n)
    {
        cout<<i<<" ";
    }

}