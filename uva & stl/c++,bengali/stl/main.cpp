
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,q,m=1;
 int j=0;
 	vector<int>v1;
 	 vector<int>v;
    while(1)
    {
        cin>>n>>q;
        if(n==0&&q==0) break;
        for(i=0; i<n; i++)
        {
            int t;
            cin>>t;
            v.push_back(t);
        }
        for(i=0; i<q; i++)
        {
            int t;
            cin>>t;
            v1.push_back(t);
        }
	vector<int>::iterator it=v1.begin();
    vector<int>::iterator it1=v.begin();
	sort(v.begin(),v.end());

        cout<<"CASE# "<< ++j <<":\n";
        for(int k=0; k<q; k++,it++)
        {
            for(i=0,m=1,it1=v.begin(); i<n; i++,it1++)
            {
                if(*it==*it1)
                {
                    m=0;
                    cout<<*it<<" found at " << i+1<<endl;
                    break;
                }
            }
            if(m==1) cout <<*it<<" not found"<<endl;
        }
	v.clear();
	v1.clear();
    }
    return 0;
}
