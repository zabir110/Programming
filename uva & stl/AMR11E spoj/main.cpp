#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a;
vector< int > v;
int main()
{
    int t,cnt,temp,b;
    int m=10000;
    for(int i=29; i<=m; i++)
    {
        temp=i;
        cnt=0;
        for(int j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                cnt++;
              //  b=0;
                while(i%j==0)
                {
                    i=i/j;
					 b++;
                  //  if(b==2) break;
                }
            }
              //   if(b==2) break;
        }
        i=temp;
        if(cnt>=3)
        {
            v.push_back(i);
        }
    }
    cin>>t;
    int a;
    for(int i=0;i<t;i++){
		cin>>a;
		cout<<v[ a -1 ]<<endl;
    }
    return 0;
}

