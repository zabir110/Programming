#include <iostream>
#include<bits/stdc++.h>>
using namespace std;

int main()
{
    int n,m,t,ans=0;
    queue < pair<long int,long int> >q;
    priority_queue<long int>pq;
    cin>>t;
    for(int cas=0; cas<t; cas++)
    {
        cin>>n>>m;
          vector<long int >a;
        for(int i=0,k; i<n; i++)
        {
            cin>>k;
            a.push_back(k);
        }

        for(int i=0; i<n; i++)
        {
            q.push(make_pair( a[i] , i ));
            pq.push(a[i]);
        }

        while(!q.empty())
        {
            if(q.front().first==pq.top() )
            {
                ans++;
                if(q.front().second==m)
                    break;
                q.pop();
                pq.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
        cout<<ans<<endl;
        ans=0;
          while(! q.empty() ) q.pop();
	    while( ! pq.empty() ) pq.pop();
	  a.empty();
    }
    return 0;
}
