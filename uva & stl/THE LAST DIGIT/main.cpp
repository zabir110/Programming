#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,t,n,r;
    long long int b;
    cin>>t;
    for(int i=0; i<t; i++){cin>>a>>b;
    if(a==0){cout<<"0"<<endl;continue;}
	if(b==0||a==1||a==11){cout<<"1"<<endl;continue;}
	if(b==1){cout<<a%10<<endl;continue;}
	if(a==5||a==15){cout<<"5"<<endl;continue;}
	if(a==20||a==10){cout<<"0"<<endl;continue;}
	a=a%10;
	if(a==2|| a==3||a==7||a==8) r=4;
	else if(a==4||a==9) r=2;
	else if(a==6) r=3;
	n=b%r;
	if(n==0) a=pow(a,r);
	else
	a=pow(a,n);
	cout<<a%10<<endl;
    }
    return 0;
}
