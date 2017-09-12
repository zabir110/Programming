#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("test.txt");
    int totalnode,n1,n2;
    in>>totalnode;
    vector< list <int > > adj(totalnode);
    while(in>>n1>>n2)
    {
        adj[n1].push_back(n2);
    }
    int c=0;
    for(auto i=adj.begin(); i!=adj.end(); i++)
    {
        cout<<c<<"-->";
        list<int> l=*i;
        for(auto it=l.begin(); it!=l.end(); it++)
            cout<<*it<<" ";
        cout<<endl;
        c++;
    }

    return 0;
}
