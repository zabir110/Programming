#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
vector<int>a[10];
list<int>l;
char clr[10];
int parent[10];
int f[10];//finishing time
int d[10];//discovery time
int t=0;//time
void DFS_visit(int);

void DFS(int n)
{
    for(int i=0; i<n; i++)
    {
        clr[i]='w';
        parent[i]=-1;
    }

    for(int i=0; i<n; i++)
    {
        if(clr[i]=='w') DFS_visit(i);
    }
}
void DFS_visit(int u)
{
    clr[u]='g';
    d[u]=++t;
    cout<<"visited"<<" "<<u<<endl;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(clr[v]=='w')
        {
            parent[v]=u;
            DFS_visit(v);
        }
    }

    clr[u]='b';
    f[u]=++t;
    //use list for strongly tropological sort
  //  l.push_front(u);
}


////strongly tropological sort
//void DFS_v(int u)
//{
//    clr[u]='g';
//    d[u]=++t;
//    for(int i=0; i<a[u].size(); i++)
//    {
//        int v=a[u][i];
//        if(clr[v]=='w')
//        {
//            parent[v]=u;
//            DFS_v(v);
//        }
//    }
//    cout<<u<<" ";
//    clr[u]='b';
//    f[u]=++t;
//}
//void Topological_sort(int n)
//{
//    for(int i=1; i<=n; i++) clr[i]='w';
//    for(int i=1; i<=n; i++) parent[i]=-1;
//
//    for(auto it=l.begin(); it!=l.end(); it++)
//    {
//        if(clr[*it]=='w') DFS_v(*it);
//    }
//}


int main()
{
    ifstream in("o.txt");
    int n,x,y,data,cnt=0;
    in>>n;
    while(in>>x>>y)
    {
        adj[x].push_back(y);
        //a[y].push_back(x);
    }
//    Adjency list
    for(int i=0; i<n; i++)
    {
        cout<<i<<" ";
        for(auto it=adj[i].begin(); it!=adj[i].end(); it++) cout<<*it<< " ";
        cout<<endl;
    }

    DFS(n);
    //strongly connected
    //Topological_sort(n);
    return 0;
}
