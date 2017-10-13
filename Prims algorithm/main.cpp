#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
#define pii pair <int,int>

using namespace std;
/*
1) Initialize keys of all vertices as infinite and
   parent of every vertex as -1.

2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or
   key) is used used as first item  of pair
   as first item is by default used to compare
   two pairs.

3) Initialize all vertices as not part of MST yet.
   We use boolean array inMST[] for this purpose.
   This array is required to make sure that an already
   considered vertex is not included in pq again. This
   is where Ptim's implementation differs from Dijkstra.
   In Dijkstr's algorithm, we didn't need this array as
   distances always increase. We require this array here
   because key value of a processed vertex may decrease
   if not checked.

4) Insert source vertex into pq and make its key as 0.

5) While either pq doesn't become empty
    a) Extract minimum key vertex from pq.
       Let the extracted vertex be u.

    b) Include u in MST using inMST[u] = true.

    c) Loop through all adjacent of u and do
       following for every vertex v.

           // If weight of edge (u,v) is smaller than
           // key of v and v is not already in MST
           If inMST[v] = false && key[v] > weight(u, v)

               (i) Update key of v, i.e., do
                     key[v] = weight(u, v)
               (ii) Insert v into the pq
               (iv) parent[v] = u

6) Print MST edges using parent array.
*/
vector<pii >adj[100];
  // Create a priority queue to store vertices that
    // are being preinMST. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/

    //  priority_queue <Type, vector<Type>, ComparisonType > min_heap;
priority_queue< pii, vector <pii>, greater<pii>>pq;
int node;
void Prims(int s)
{
//     Create a vector for keys and initialize all
//     keys as infinite (INF)
//    use as a normal array
    vector<int> key(node, 555);
//
//     To store parent array which in turn store MST
    vector<int> parent(node, -1);
//
//     To keep track of vertices included in MST
    vector<bool> inMST(node, false);
// Insert source itself in priority queue and initialize
    // its key as 0.
    pq.push(pii(0,s));
    key[s]=0;
    while(!pq.empty())
    {
        // The first vertex in pair is the minimum key
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted key (key must be first item
        // in pair)
        int u=pq.top().second;
        pq.pop();
        inMST[u]=true;
        for(int i=0 ; i<adj[u].size(); i++)
        {
            int v=adj[u][i].first;
            int w=adj[u][i].second;

            //  If v is not in MST and weight of (u,v) is smaller
            // than current key of v
            if(inMST[v]==false && key[v]>w )
            {
                // Updating key of v
                key[v]=w;
                pq.push(pii(key[v],v));
                parent[v]=u;
            }
        }
    }
    // Print edges of MST using parent array
    for (int i = 1; i < node; ++i)
        printf("  %d - %d\n", parent[i], i);
}
int main()
{
    int n1,n2,w;
    ifstream in("file.txt");
    in>>node;
    while(in>>n1>>n2>>w)
    {
        adj[n1].push_back(pii(n2,w));
        adj[n2].push_back(pii(n1,w));
    }
    int s;
    cout<<"source:";
    cin>>s;
    Prims(s);
    return 0;
}
