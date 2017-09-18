#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
#define pii pair <int,int>
/*
// Initialize result
mst_weight = 0

// Create V single item sets
for each vertex v
	parent[v] = v;
	rank[v] = 0;

Sort all edges into non decreasing
order by weight w

for each (u, v) taken from the sorted list  E
    do if FIND-SET(u) != FIND-SET(v)
        print edge(u, v)
        mst_weight += weight of edge(u, v)
        UNION(u, v)
        */
using namespace std;
int weight=0;
vector<pair<int,pii> >edge;
int parent [10];
int node;
void makeset()
{
    for(int i=0; i<node; i++)
    {
        parent[i]=i;
    }
}
int Find_rep(int r)
{
    if(parent[r]==r) return r;
    parent[r]=Find_rep(parent[r]);
    return parent[r];

}
void Union(int a,int b)
{
    int u=Find_rep(a);
    int v=Find_rep(b);
    if(u!=v) parent[u]=v;
}
void KruskalMST()
{
    sort(edge.begin(),edge.end());
    makeset();
      // Sort edges in increasing order on basis of cost
    for(auto it=edge.begin(); it!=edge.end(); it++)
    {
        int u=it->second.first;
        int v=it->second.second;

        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if(Find_rep(u)!=Find_rep(v))
        {
        	 // Merge two sets
        	   Union(u,v);
        	// Current edge will be in the MST
            // so print it

            // Update MST weight
            cout<<u<<" - "<<v<<endl;
            weight+=it->first;
        }
    }
    cout<<"Total cost: "<<weight;
}
int main()
{
    int n1,n2,w;
    ifstream in("file.txt");
    in>>node;
    while(in>>n1>>n2>>w)
    {
        edge.push_back({w,{n1,n2}});//make_pair(w,pii(n1,n2)) ai vabe lekhar bodole current rule ao lekha jai
    }
    KruskalMST();
    return 0;
}
