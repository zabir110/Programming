#include <iostream>
#include<stdio.h>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
map<int,int>visited;
int c=0;
void bfs(int s, map<int, vector<int> >adj)
{
    queue < int > q;
    visited.clear();
    q.push(s);
    visited[s]=0;//map a rakhlam
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!visited.count(v))//jodi visit kori tobe map a ase ;;map a thakle 1 dibe,ar na thakle 0 return korbe--ar tokhon ta visit korbo
            {
                visited[v]=visited[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    ifstream in("z.txt");
    //  ofstream out("a.txt");
    int test,node1,node2;
    while(1)
    {
        in>>test;
        map<int, vector<int> >adj;
        if(test==0) break;
        for(int i=0; i<test; i++)
        {
            in>>node1>>node2;

            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }
        int n,t;
        while(1)
        {
            in>>n>>t;
            if(n==0 && t==0) break;
            bfs(n,adj);
            int result=0;
            for(auto itr = visited.begin(); itr != visited.end(); ++itr)
            {
                if(itr->second>t)
                {
                    ++result;//boro ttl gola bad dite hobe

                }
            }
            result=adj.size()- (visited.size()-result);
            cout<<"Case "<<++c<<": "<<result<<" nodes not reachable from node "<<n<<" with TTL = "<<t<<"."<<endl;
        }
    }
    return 0;
}
/*
  336 - A Node Too Far
  UVa Online Judge
  Esteban Arango Medina
    Solution.
        This is a 'simple' BFS . First, for the read I had to use a map, cuz' the nodes could
        be greater so it is dificult to put in vector index(so put in map index->in vector put the adjaacent).
    Notes.
        http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=graphsDataStrucs2
*/

