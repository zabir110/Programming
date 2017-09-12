#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int bfs_bicolor(int n,vector<int>adj[] )
{
    queue<int>q;
    char visited[10000],v,m=0;
    for(int i=0; i<n; i++) visited[i]='w';//int type  niya -1 dara initialized
    q.push(0);
    visited[0]='r';//0 korbo
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            v=adj[u][i];
            if(visited[v]=='w')//-1 check korbo
            {
                if(visited[u]=='r') visited[v]='b';//0 thakle 1 korbo
                else visited[v]='r';//noile 0 korbo
                q.push(v);
            }
            else
            {
                if(visited[u]==visited[v]) return 0;

            }

        }
    }
    return 1;
}
int main()
{
    int test,n1,n2;
      ifstream in("z.txt");

    while(1)
    {
        vector<int>adj[100000];
        int node,edge;
        in>>node;
        if(node==0) break;
        in>>edge;

        for(int i=0; i<edge; i++)
        {
            in>>n1>>n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
        int  c=0;
        c= bfs_bicolor(node,adj);
        if(c)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}

