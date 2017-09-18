#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,d;
    cin >>n >>k;
    vector<long long int > v,v1;
    vector<long long int >::iterator it ,it1;
   it  =v1.begin();
     it1  =v1.begin();
    for(int i=0 ; i <k ; i++)
    {
        cin>>d;
        v.push_back(d);
    }
    for(int i=1 ; i <=n ; i++)
    {
        v1.push_back(i);
    }
int l;
    for ( int i=0 ; i< k; i++)
    {
        for ( int j=0,l =1 ; j < v[i] ; l++,j++)
        {
            if((l+i)==n) l=1;

        }
        it=it+l-1;
        cout<<v[l-1]<< " ";
        it1=it;
       it++;
       v.erase(it1);
    }
    return 0;
}
