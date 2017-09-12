#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
vector<int>adj[10];
queue<int>q;
char clr[10];
int parent[10];
int dis[10],c=0;
void BFS(int source,int n)
{
     c++;
    clr[source]='g';
    dis[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(clr[v]=='w')
            {
                clr[v]='g';
                dis[v]=dis[u]+1;
                parent[v]=u;
                cout<<"visited :"<<v<<"   distance :"<<dis[v]<<" parent :"<<u<<endl;
                q.push(v);
            }
        }
        clr[u]='b';
    }
}
void componenet_find(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(clr[i]=='w')
		BFS(i,n);
        }
        cout<<"componenet: "<<c;
}
    int main()
    {
        ifstream in("z.txt");
        int n,x,y,data,cnt=0;
        in>>n;
        for(int i=1; i<=n; i++)
        {
            clr[i]='w';
            parent[i]=-1;
            dis[i]=100000;
        }
        while(in>>x>>y)
        {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
//ADJACENCY LIST
//        for(int i=1; i<=n; i++)
//        {
//            cout<<i<<" ";
//            for(auto it=adj[i].begin(); it!=adj[i].end(); it++) cout<<*it<< " ";
//            cout<<endl;
//        }
        int source;
//    cout<<"source :";
//    cin>>source;
componenet_find(n);

        return 0;
    }
