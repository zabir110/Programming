#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,total=1,temp=0;
    vector<int>v;
    cin>>n>>k;
    int m=n;
    for(int i=0,j=2; i<k-1; )
    {
        if(m%j==0)
        {
            total*=j;
            m/=j;
            v.push_back(j);
            i++;
        }
        else
        {
            j++;
        }
             if(j>m) break;
    }
    if(m>1)
        v.push_back(m);

    if(v.size()==k)
    {
        for(int i=0; i<k; i++)
        {
            cout<<v[i]<< " ";
        }
    }
    else cout<<"-1";
    return 0;
}
