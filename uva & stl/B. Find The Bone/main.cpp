#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  int i,n,m,k,h,u,v,curr=1;
    map <long int,bool > mp;
    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>h;
        mp[h]=0;
    }
    for(i=0; i<k; i++)
    {
        cin>>u>>v;
        if(mp.find(u)!=mp.end() && v==curr)
        {
            cout<<u<<endl;
            break;
        }
        else if(mp.find(v)!=mp.end() && u==curr)
        {
            cout<<v<<endl;
            break;
        }
        else if(mp.find(u)!=mp.end() && u==curr)
        {
			cout<<u<<endl;
            break;
        }
         else if(mp.find(u)!=mp.end() && v==curr)
        {
			cout<<v<<endl;
            break;
        }
            else if(curr==u) curr=v;
            else if(curr==v) curr=u;
    }
    if(i==k) cout<<curr<<endl;
    return 0;
}
