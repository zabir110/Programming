#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[50];
set< pair<int,int> >pq;
int cost[20][20]= {0};

//class CompareDist
//{
//public:
//    bool operator()(pair<int,int> n1,pair<int,int> n2)
//    {
//        return n1.second>n2.second;
//    }
//};

//ai problem ta priority_queue(pair)use kore kora jai->class use kore ()operator overload korte hoi->push()/pop()/top() use korte hoi
//another process hocche set a pair use->ai process sohoj
void Dijkstra(int s,int n)
{
   // priority_queue<pair<int,int>,vector<pair<int,int>>,CompareDist> pq;
    int distance[n],v;
    for(int i=0; i<n; i++) distance[i]=555555;
    distance[s]=0;
    pq.insert(pair<int,int>(0,s));
    while(!pq.empty())
    {
        auto it=pq.begin();//first element ke dhorlam
        int u=it->second;//source ke ber korlam-> top() korlam
          pq.erase(it);//pop() korlam
    //    pair<int,int>p=pq.top();
	//     pq.pop();
      //  int u =p.second;
        for(int i=0; i<adj[u].size(); i++)
        {
            v=adj[u][i];
            if(distance[u]+cost[u][v]<distance[v])
            {
                distance[v]=distance[u]+cost[u][v];
                pq.insert(pair<int,int>(distance[v],v));
            }
        }
    }
    cout<<endl;
    cout<<"Vertex   Distance from Source\n";
    for(int i=0; i<n; i++)
    {
        cout<<i<<"               "<<distance[i]<<endl;
    }
}

int main()
{
    ifstream in("z.txt");
    int n,x,y,c,cnt=0;
    in>>n;

    while(in>>x>>y>>c)
    {
        adj[x].push_back(y);
        adj[y].push_back(x);
        cost[x][y]=c;
        cost[y][x]=c;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int source;
    cout<<"source :";
    cin>>source;
    Dijkstra(source,n);
    return 0;
}

//Vertex   Distance from Source
//0                0
//1                4
//2                12
//3                19
//4                21
//5                11
//6                9
//7                8
//8                14
