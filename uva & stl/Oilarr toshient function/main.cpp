#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter a number:";
  int n,ret;
      cin>>n;
    ret=n;
    for( int i=2 ;i*i<=n;i++){
		if(n%i==0){
				while(n%i==0){
					n/=i;
				}
				ret-=ret/i;
		}
    }
    if(n>1) ret-=ret/n;
    cout<<ret<<endl;
    return 0;
}
