#include <iostream>

using namespace std;

int main()
{
	int a,b,sum=0;
    cin>>a>>b;
    while(a<=b){
		sum+=a*a;
		a++;
    }
    cout<<sum;
    return 0;


}
