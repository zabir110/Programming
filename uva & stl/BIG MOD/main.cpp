#include <iostream>

using namespace std;
int mod;
int big_mod(int n,int p)
{
	int ret;
	if(p==0) return 1;
	else if(p%2==0){
		 ret=big_mod(n,p/2);
		return ((ret%mod)*(ret%mod))%mod;
	}
	else{
		return ((n%mod)*big_mod(n,p-1)%mod)%mod;
	}
}
int main()
{
	cout<<"Ebter the num,power,mod:"<<endl;
	int n,p;
cin>>n>>p>>mod;
cout<<"result:"<<big_mod(n,p);
    return 0;
}
