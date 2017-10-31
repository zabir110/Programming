#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[20];
queue<int>q;
int parent[20]={0};
int dis[100];
int cnt=0;
// Find path though the graph from a given node to another.
// If start and end node are same then nothing to do just print that node.
// Else
void find_path(int source,int des)
{
    //Easy process
    if(source==des) cout<<source<<"->";
    else
    {
        find_path(source,parent[des]);
        cout<<des<<"->";
    }
//Another process to find path
//    vector<int>v;
//    v.push_back(des);
//    int now=des;
//    while(source!=now)
//    {
//        now=parent[des];
//        v.push_back(now);
//    }
//    reverse(v.begin(),v.end());
//    for(auto it=v.begin(); it!=v.end(); it++) cout<<*it<<"->";
}

// Performs BFS on given node, also prints distance array and parent array.
// Set distance array to infinite for all nodes and parent to 0. Set distance
// of parent node to zero and push to the queue. Take it out of queue and push
// all the reachable nodes from current node to queue.
// Also set the distance of the current node as the distance of its parent node
// plus one assuming all the distances are one instead of another same value.
// Set parent of current node to the node that was taken out of queue.
void BFS(int s,int n)
{

    q.push(s);
    dis[s]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)//nth vector 1st,2nd,.....element
        {
            int v=adj[u][i];
            if(dis[v]==555)//nth vector 1st,2nd,.....element ar value ta visit hoice kina,
            {
                dis[v]=dis[u]+1;//dis value ta amon vabe raksi, jate distance bhojhay
                parent[v]=u;
                q.push(v);
            }
        }
    }
    // Print all the reachable nodes with distance from current nodes.
    for(int i=1; i<=n; i++)
    {
        if(dis[i]!=555)
            cout<<s<<" "<<i<<" "<<dis[i]<<endl;
        else cout<<s<<" "<<i<<" "<<"no path"<<endl;
    }
   //  Print the parent array.
    for (int i=1; i<=n; i++)
    {
        cout<<i<<" r parent"<<" "<<parent[i]<<endl;
    }
    int d;
    cout<<"destination: ";
    cin>>d;
   find_path(s,d);
}
//void component_find(int n)
//{
//    for(int i=1; i<=n; i++)
//    {
//        if(dis[i]==555)
//            BFS(i,n);
//    }
//}
int main()
{

    ifstream in("z.txt");
    int n,x,y,data,cnt=0;
    in>>n;
  for(int i=1;i<=n;i++) dis[i]=555;
    while(in>>x>>y)
    {
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source;
    cout<<"source :";
    cin>>source;
    //component_find(n);
    BFS(source,n);
    //cout<<"component: "<<cnt;
    return 0;
}
