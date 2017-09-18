#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
multiset<int>v;
int main()
{
	//freopen("t.txt","r",stdin);
    ll t,a,m,temp=0,sum=0,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>m>>a;
       for(int i=0;i<m;i++)
        {
            cin>>temp;
            v.insert(temp);
        }
       // sort(v.begin(),v.end());
        multiset<int>::iterator it=v.begin();
        while(it!=v.end())
        {
            sum+=*it;
            if(sum>a) break;
            it++;
            cnt++;
        }
        cout<<cnt<<endl;
         v.clear();
         sum=0;
         cnt=0;
    }
    return 0;
}
