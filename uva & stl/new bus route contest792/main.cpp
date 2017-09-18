#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a;
    multiset <int > s,s1;
    cin >> n;
    for ( int i=0 ; i< n ; i++)
    {
        cin>> a;
        s. insert(a);
    }
    int dif;
    multiset< int > :: iterator it =s. begin();
    multiset< int > :: iterator it1=s. begin();
    ++it1;
    for (; it1!=s.end();it1++,it++)
    {
        dif =*it1 -*it;
        s1.insert(dif);
    }
    int m=1;
    it=s1.begin();
    it1=s1.begin();
    ++it1;
    for(; it1!=s1.end();it1++, it++)
    {
        if(*it==*it1) m++;
        else break;
    }
    it=s1.begin();
    cout<<*it<<" "<<m;
    return 0;
}
