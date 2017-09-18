#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
bool mark[1000000008];
int main()
{
    vector<int> prime;
    long long  int a,n,t;
        cin>>n;
        int limit = sqrt(n)+1;
        for(int i=4; i<=n; i+=2) mark[i]=1;
		prime.push_back(2);
        for(int i=3; i<=n; i=i+2)
        {
            if(!mark[i])
            {
                    prime.push_back(i);
                if(i<=limit)
                {
                    for(int j=i*i; j<=n; j+=2*i)
                    {
                        mark[j]=1;
                    }
                }
            }
        }
        for(vector<int >::iterator it=prime.begin(); it!=prime.end(); it++)
        {
            cout<<*it<<endl;
        }
        prime.clear();

    return 0;
}
