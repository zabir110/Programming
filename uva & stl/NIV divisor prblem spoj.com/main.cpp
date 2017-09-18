#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
bool status[1000000009];

vector < long long  int >prime;

void pri(long long int a,long long int n)
{
    for(int i=2; i*i<=n;i= i++)
    {
        if(status[i]==false)
        {
            for(int j=i*i; j<=n; j=j+i)  status[j]=true;
        }
    }
    status[1]=true;
    for(long long int i=a; i<=n; i++)
    {
        if(status[i]==false)
        {
            prime.push_back(i);
        }
    }

}

long long int divisor_find(long long int n)
{
    long long  int divisor =1;
    for(long long int i=0; i<prime.size(); i++)
    {
        if(n%prime[i]==0)
        {
            long long int cnt=1;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                cnt++;
            }
            divisor=divisor*cnt;
        }
    }
    return divisor;
}

int main()
{
    long long int a,b,found,divisor,result=0;
    cin>>a>>b>>found;
    pri(a,b);
    for(long long int i=a; i<=b; i++)
    {
        divisor=divisor_find(i);
        if(divisor==found) result++;
    }
    prime.empty();
    cout<<result;
    return 0;
}

