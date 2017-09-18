/*
1) Initialize distances of all vertices as infinite.

2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or
   distance) is used used as first item  of pair
   as first item is by default used to compare
   two pairs

3) Insert source vertex into pq and make its
   distance as 0.

4) While either pq doesn't become empty
    a) Extract minimum distance vertex from pq.
       Let the extracted vertex be u.
    b) Loop through all adjacent of u and do
       following for every vertex v.

           // If there is a shorter path to v
           // through u.
           If dist[v] > dist[u] + weight(u, v)

               (i) Update distance of v, i.e., do
                     dist[v] = dist[u] + weight(u, v)
               (ii) Insert v into the pq (Even if v is
                    already there)

5) Print distance array dist[] to print all shortest
   paths.
   */
#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
#define pii pair <int ,int>
using namespace std;
vector<int>adj[100];
int dis[10];
int cost[10][10]= {0};
priority_queue<pii>q;
//priority_queue< pii, vector <pii>, greater<pii>>q;
void Dijkstra(int node,int s)
{
    dis[s]=0;
    q.push(pii(dis[s],s));
    while(!q.empty())
    {
        pii m=q.top();
        q.pop();
        int u=m.second;
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(dis[v]>dis[u]+cost[u][v])
                dis[v]=dis[u]+cost[u][v];
            q.push(pii(dis[v],v));
        }
    }
    printf("Vertex   Distance from Source\n");
    for (int i = 1; i <= node; ++i)
        printf("%d \t\t %d\n", i, dis[i]);
}
int main()
{
    int node,n1,n2,w;
    memset(dis,555,sizeof(dis));
    memset(cost,0,sizeof(cost));
    ifstream in("file.txt");
    in>>node;
    while(in>>n1>>n2>>w)
    {
        adj[n1].push_back(n2);
        cost[n1][n2]=w;
    }
    int s;
    cout<<"source:";
    cin>>s;
    Dijkstra(node,s);

    return 0;
}
