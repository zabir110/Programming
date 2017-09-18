#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>a,b;

    int n,m,data,check=0,cnt=0,ch=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        a.insert(data);
    }
    for(int i=0; i<m; i++)
    {
        cin>>data;
        b.insert(data);
    }
    set<int >::iterator it_min=a.begin();
    set<int >::iterator it1_min=b.begin();

    for(int i=*it_min; i<=*it1_min; i++)
    {
        for( set<int >::iterator it=a.begin(); it!=a.end(); it++)
        {
            if(i%(*it)!=0)
            {
                check=0;
                break;
            }
            check=1;
        }
        for( set<int >::iterator it1=b.begin(); it1!=b.end(); it1++)
        {
            if((*it1)%i!=0)
            {
                ch=0;
                break;
            }
            ch=1;
        }
        if(check==1 && ch==1) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
