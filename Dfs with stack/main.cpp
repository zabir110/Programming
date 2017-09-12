#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
stack<int>s;
int visited[10]={0};
void DFS(int source,int n)
{
    s.push(source);
    while(!s.empty())
    {
        int u=s.top();
        s.pop();

        if(!visited[u])
        {
            cout<<u<<endl;
            visited[u]=1;
        }
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!visited[v]) s.push(v);
        }
    }
}
//void DF_S(int n)
//{
//    for(int i=0; i<n ; i++)
//        if(!visited[i])
//            DFS(i,n);
//}
int main()
{
    ifstream in("z.txt");
    int n,x,y,data,cnt=0;
    in>>n;
    while(in>>x>>y)
    {
        adj[x].push_back(y);
    }
    int source;
    cout<<"Source:";
     cin>>source;
    //Particular node visit ar somoy
  DFS(source,n);
    //ALL NODE  VISIT BY AITA
   // DF_S(n);
    return 0;
}
