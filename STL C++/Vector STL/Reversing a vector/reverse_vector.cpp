#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse_vector(vector<int> v)
{
    int s=0,e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;
}

void print_vector(vector<int> v)
{
    for(int i:v)
    {
        cout<<i<<" ";
    }
}

int main()
{
    vector<int> v={1,3,4,6,7,9};

    vector<int> p = reverse_vector(v);
    
    print_vector(p);   
    
}