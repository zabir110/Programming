#include <iostream>
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
queue<pii>q; //A queue containing STL pairs
int fx[]= {-1,0,1,0};
int fy[]= {0,1,0,-1};
int cell[100][100];
int d[100][100],vis[100][100]; //d means destination from source.
int row,col;
set<int>s;
void bfs(int sx,int sy) //Source node is in [sx][sy] cell.
{
//    q.push(pii(sx,sy));
//    vis[sx][sy]=1;
//    d[sx][sy]=0;
//    while(!q.empty())
//    {
//        pii top=q.front();
//        q.pop();
        for(int k=0; k<4; k++)
        {

            int tx=sx+fx[k];
            int ty=sy+fy[k]; //Neighbor cell [tx][ty]
            if((tx>=0 and tx<row) && (ty>=0 && ty<col )&& cell[tx][ty]!=-1 && vis[tx][ty]==0) //Check if the neighbor is valid and not visited before.
            {
            //   if(d[tx][ty]> d[top.first][top.second]+cell[tx][ty] )
             //  {
                    d[tx][ty]=d[sx][sy]+cell[tx][ty];
                    if(cell[tx][ty]==0)
                    {
                        s.insert(d[tx][ty]);
                        break;
                    }
                  //  vis[tx][ty]=1;
                    bfs(tx,ty);
          //     }
                //Pushing a new pair in the queue
            }

        }
   // }
}
int main()
{

    while(1)
    {
        int sx,sy;
        memset(vis,0,sizeof vis);
        memset(cell,0,sizeof cell);
        memset(d,555,sizeof d);
        cin>>col>>row;
        if(col==0 && row ==0) break;
        char p,c;
        cin.get(p);

        for(int i=0; i<row; i++)
        {

            for(int j=0; j<col; j++)
            {
                cin.get(c);
                if(c=='S')
                {
                    sx=i;
                    sy=j;
                    cell[i][j]=0;
                }
                else if (c=='X') cell[i][j]=-1;
                else if(c=='D') cell[i][j]=0;
                else
                {
                    cell[i][j]=c-'0';
                }
            }
            cin.get(p);
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout<< cell[i][j]<<"  ";
            }
            cout<<endl;
        }


        bfs(sx,sy);

        for(auto it=s.begin(); it!=s.end(); it++)
            cout<<*it<<" ";

        s.clear();
        cout<<endl;
    }
    return 0;
}
