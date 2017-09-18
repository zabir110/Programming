#include <iostream>

using namespace std;

int main()
{
//    int i, n,m,k,p[101],d1=0,d2=0;
//    cin>>n>>m>>k;
//    for( i=0; i<n; i++) cin>>p[i];
//    for(i=m; i<n; i++)
//    {
//        if(p[i]>k||p[i]==0) d1+=10;
//        else
//        {
//            d1+=10;
//            break;
//        }
//    }
//    int j=i;
//    for( i=m-2; i>=0; i--)
//    {
//        if(p[i]>k||p[i]==0) d2+=10;
//        else
//        {
//            d2+=10;
//            break;
//        }
//    }
//    if(i==-1)
//    {
//        cout<<d1<<endl;
//        return 0;
//    }
//    if(j==n)
//    {
//        cout<<d2<<endl;
//        return 0;
//    }
//    if(d2>d1) cout<<d1<<endl;
//    else cout<<d2<<endl;
int a[1001],b[1001];
int t;
cin>>t;
for(int i=0;i<t;i++){
	cin>>a[i]>>b[i];

	if(a[i]!=b[i]) {
		cout<<"rated"<<endl;
		return 0;
	}
}
for(int i=0;i<t-1;i++){
	if(a[i]<a[i+1]) {
		cout<<"unrated"<<endl;
		return 0;
	}
}
cout<<"maybe"<<endl;
    return 0;
}
