#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int x,int y)
{
    int p = 1;
    for (int i=1; i<=y; i++  )
    {
        p = p * x;
    }
    return p;
}

int main()
{
    int m,n;
    cin>>m>>n;
    int q = pow(m,n);
    cout << q;
}

