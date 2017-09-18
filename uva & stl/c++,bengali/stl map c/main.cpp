#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< long int, long int >mp;
    vector<int >v;
    while(1)
    {

    	long  int j=0;
        int n,m;
        cin>>n>>m;
        if(m==0 && n==0) break;
        int data,data1;
        for(long int i=0; i<n; i++)
        {
            cin>>data;
            mp[ data ] = i+1;
        }
        map<long int ,long int> :: iterator it;
        it=mp.begin();
        for(int i=0; i<m; i++)
        {
            cin>>data1;
            v.push_back(data1);
        }
        for( long int i=0; i<m; i++)
        {
            it=mp.find(v[i]);
            if(it!=mp.end())
            {
                j++;
            }
        }
        cout<<j<<endl;
	v.clear();
	mp.clear();
    }
    return 0;
}
