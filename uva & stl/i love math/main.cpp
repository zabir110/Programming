#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int test,n,result;
     double p;
    cin >> test;
    int i=0;
    for( int j=0; j<test; j++)
   {
	cin>>n;
	p=(-1+sqrt(1+4*2*n))/2;
	result=(-1+sqrt(1+4*2*n))/2;
	if(result>=0 && result==p) cout<<result<<endl;
	else cout<<"NAI"<<endl;
    }
    return 0;
}
