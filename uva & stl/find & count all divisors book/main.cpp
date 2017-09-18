#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector< int > divisor[10000];
int cnt[10000]={0};
int main()
{
    int n;
    cin>>n;
    for( int i=1 ; i<=n; i++)
    {
        for ( int j=i; j<=n; j=j+i)
        {
            divisor[j].push_back(i);
            cnt[j-1]++;
        }
    }
    for ( int i=1 ;i<n;i++){
			cout<<i<<"=";
    for(vector <int > :: iterator it =divisor[i].begin();it!=divisor[i].end();it++){
		cout  <<*it<< " ";}
    cout<<"\n"<<cnt[i-1]<<endl;
    cout<< endl;
    }

    return 0;
}
