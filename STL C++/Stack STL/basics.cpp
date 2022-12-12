#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    
    s.push("a");
    s.push("b");
    s.push("c");
    s.push("d");
    

    s.pop();

    cout<<"Element on the top "<<s.top()<<endl;

    cout<<"Size of a stack "<<s.size()<<endl;
}