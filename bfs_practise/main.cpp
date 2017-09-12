#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
vector<int>adj[100];
stack<int>q;
int visited[100]= {0};
void dfs(int n,int s)
{
    q.push(s);
    while(!q.empty())
    {
        int u=q.top();
        q.pop();
        if(!visited[u])
        {
            cout<<u<<" ";
            visited[u]=1;
        }
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!visited[v]) q.push(v);
        }
    }
}

int main()
{
    int node,a,b;
    ifstream in("z.txt");
    in>>node;
    while(in>>a>>b)
    {
        adj[a].push_back(b);
    }
    int s;
    cout<<"source: ";
    cin>>s;
    dfs(node,s);
    return 0;
}
