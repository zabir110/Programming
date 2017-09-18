#include <iostream>
#include<bits/stdc++.h>
#define pii pair <int ,int >
using namespace std;
int r,c;
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
int vis[1010][1010];
int d[1010][1010];
int a[1010][1010];
queue<pii>q;
void bfs(int s1,int s2)
{
    d[s1][s2]=0;
    vis[s1][s2]=1;
    q.push(pii(s1,s2));
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int x=top.first+dx[i];
            int y=top.second+dy[i];
            if((x>=0 && x<r )&&( y>=0 && y<c )&& a[x][y]!=-1  &&  vis[x][y]==0)
            {
                vis[x][y]=1;
                d[x][y]=d[top.first][top.second]+1;
                q.push(pii(x,y));
            }
        }
    }
}
int main()
{

    while(1)
    {
        memset(vis,0,sizeof vis);
      //  memset(d,0,sizeof d);
        memset(a,0,sizeof a);
        cin>>r>>c;
        if(r==0 && c==0) break;
        int bomb;
        cin>>bomb;
        for(int i=0; i<bomb; i++)
        {
            int row,n,col;
            cin>>row>>n;
            for(int j=0; j<n; j++)
            {
                cin>>col;
                a[row][col]=-1;
            }

        }
        int s1,s2,d1,d2;
        cin>>s1>>s2;
        cin>>d1>>d2;
        bfs(s1,s2);
        cout<<d[d1][d2]<<endl;
    }
    return 0;
}
