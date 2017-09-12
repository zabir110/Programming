#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

class edge
{
public:
    int node, weight;
    edge(int n,int w1)
    {
        node=n;
        weight=w1;
    }
};
int main()
{
    ifstream in("test.txt");
    int totalnode,n1,n2,w;
    in>>totalnode;
 //    vector< list < edge > > adj(totalnode);
    vector<edge>adj[10];
    while(in>>n1>>n2>>w)
    {
    	//edge obj(n2,w) then obj push_back korbo tao hobe;
        adj[n1].push_back( edge(n2,w));
    }
    int c=1;
//    for(auto i=adj.begin(); i!=adj.end(); i++)
//    {
//        cout<<c<<" ->";
//        list<edge>lst=*i;
//          list<edge>:: iterator it;
//        for( it=lst.begin(); it!=lst.end(); it++)
//        {
//            cout<<it->node<<" "<<it->weight<<"->";//  cout<<it->ode<<" "<<it->weight<<"->";
//        }
//        cout<<endl;
//    }

//if  we use a vector with a class
    vector<edge>::iterator it;
    for(int i=1; i<=totalnode; i++)
    {
    	cout<<i;
        for( it=adj[i].begin(); it!=adj[i].end(); it++)
        {
          cout  <<"->"<<"["<<it->node<<" "<<it->weight<<"]";//it->node   =equal    (*it).node if it will pointer obj
        }
        cout<<endl;
    }
        return 0;
    }
