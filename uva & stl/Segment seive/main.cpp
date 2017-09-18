#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool ar[1000000000];
bool seg[1000000];
vector<int> v;
int main()
{
    long long  int j,a,b;
    cin>>a>>b;

    int range[b-a+1];
    j=a;
    for(int i=0; i<=b-a; i++)
    {
        range[i]=j;
        j++;
    }
    for ( long long int i=2; i*i<=b; i++)
    {
        if(ar[i]==false)
        {
            v.push_back(i);
            for(int j=i*i; j<=b; j+=i) ar[j]=true;
        }
    }
    for(auto it=v.begin(); it!=v.end(); it++)
    {
       if( range[i]==0)
          //  cout<<range[i]<<endl;
        for(int i=0; i<=b-a; i++)
        {
            cout<<range[i]<<endl;
        }
    }
//    for(int i=0; i<b-a; i++)
//    {
//        if(range[i]) cout<<range[i]<<endl;
//    }
    return 0;
}
