#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="My ";
    m[13]="Is ";
    m[2]="Name ";

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    m.insert({15,"Lakshay"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13--> "<<m.count(13)<<endl; //TO CHECK IF THE STRING IS PRESENT OR NOT USE COUNT

    m.erase(13);

    cout<<"after erase"<<endl;
    
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //FINDING AN ELEMENT 

    auto it = m.find(2);

    for(auto i=it;i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
}