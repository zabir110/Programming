#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<char ,int> x;
    map<char,int>m;
    for(char  ch='a'; ch<='z'; ch++)
    {
       // x.first=ch;
       // x.second=int(ch);
        m[ch]=int(ch);
    }
    map<char,int> :: iterator it=m.begin();
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
it=m.find('j');
cout<<m['j'];
    return 0;
}
