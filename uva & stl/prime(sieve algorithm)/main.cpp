#include <iostream>
#include<math.h>
using namespace std;
bool status[1000000];
int main()
{
    int n,a,position;
  cin>>n;
    for(int i=2; i*i<=n; i=i++)
    {
        if(status[i]==false)
        {
				//cout<<i<<endl;
            for(int j=i*i; j<=n; j=j+i)  status[j]=true;
        }
    }
    //Optimise by
//    for(int i=3; i*i<=n; i+=2)
//    {
//        if(status[i]==false)
//        {
//				//cout<<i<<endl;
//            for(int j=i*i; j<=n; j=i+i)  status[j]=true;
//        }
//    }
    status[1]=true;
    for(int i=1;i<=n;i++){
		if(!status[i]) cout<<i<<endl;
    }
    return 0;
}
