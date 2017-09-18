#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   freopen("t.txt","r",stdin);
    int i=0,m=0;
    string a[101];
    while(getline(cin,a[i]))
    {

    if(a[i].size()>m) m=a[i].size();
      i++;
    }

  int  p=i;

    for(int i=0; i<m; i++)
    {
        for(int j=p-1; j>=0; j--)
        {
        	if(a[j].length()>i)   cout<<a[j][i];
        	else
          cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
