/*
Floyd Warshall Algorithm
We initialize the solution matrix same as the input graph matrix as a first step. Then we update the solution matrix by considering all vertices as an intermediate vertex. The idea is to one by one pick all vertices and update all shortest paths which include the picked vertex as an intermediate vertex in the shortest path. When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. For every pair (i, j) of source and destination vertices respectively, there are two possible cases.
1) k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is.
2) k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j].
*/
#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
#define INF 99999
using namespace std;

int node;
int dis[100][100];
int nxt[100][100];
list<int>l;
void Print_Distance()
{
    cout<<"Following matrix shows the shortest distances"
        " between every pair of vertices \n";
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            if(dis[i][j]==INF)
                cout<<"INF"<<"   ";
            else
                cout<<dis[i][j]<<"   ";
        }
        cout<<endl;
    }
}
void find_path(int i,int j)
{
    cout<<i<<" ";
    while(i!=j)
    {
        i=nxt[i][j];
        l.push_back(i);
    }
    //via is present in list
    for(auto it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
}
void floyd_warshall()
{
    for(int k=0; k<node; k++)
    {
        // Pick all vertex as source one by one
        for(int i=0; i<node; i++)
        {
            // Pick all vertex as destination for the
            // above picked source
            for(int j=0; j<node; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if((dis[i][k]+dis[k][j]<dis[i][j]))
                {
                    dis[i][j]=dis[i][k]+dis[k][j];
                    nxt[i][j]=nxt[i][k];
                }
            }
        }
    }
    Print_Distance();
    cout<<"If u want to go any path then press i->j"<<endl;
    int i,j;
    cin>>i>>j;
    find_path(i,j);

}


int main()
{
    ifstream in("z.txt");
    in>>node;
    int n1,n2,w;
    //This loop is to do diagonally 0 &&  initialized with infinite
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            if(i==j)
                dis[i][j]=0;

            else
                dis[i][j]=INF;
        }

    }

    //Initialize the way i->j with only means there is no via between i and j
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {

            nxt[i][j]=j;
        }

    }
    while(in>>n1>>n2>>w)
    {
        dis[n1][n2]=w;
    }

    floyd_warshall();
    return 0;
}
