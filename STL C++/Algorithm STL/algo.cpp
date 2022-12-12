#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // THESE ARE ALREADY SORTED FOR BINARY SEARCH
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(11);

    vector<int> p={19,11,13,2,14,1,7,4};

    // SORING BEFORE BINARY SEARCH

    sort(p.begin(),p.end()+1);

    for(int i:p)
    {
        cout<<i<<" "<<endl;
    }

    // BINARY SEARCH SYNTAX ----> binary_search(start element,end element,key)
    // IT WILL ONLY GIVE TRUE(1) OR FALSE(0) AS OUTPUT

    cout<<"Finding element 6 --> "<<binary_search(v.begin(),v.end(),6)<<endl;   

    cout<<"Finding element 7 --> "<<binary_search(v.begin(),v.end(),7)<<endl;

    // LOWER BOUND AND UPPER BOUND 

    cout<<"Lower Bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound-->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    // MAX,MIN AND SWAP

    int a=3;
    int b=5;

    cout<<"Max --> "<<max(a,b)<<endl;
    cout<<"Min --> "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"After swapping "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    // REVERSE A STRING

    string s = "abcd";

    reverse(s.begin(),s.end());
    cout<<s<<endl;

}