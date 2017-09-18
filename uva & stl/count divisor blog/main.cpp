#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number :" << endl;
    int n,cnt=0;
    cin>>n;
    for( int i=1 ; i*i<=n;i++){
		if(i*i==n)
			cnt++;
		else if(n%i==0) cnt+=2;
    }
    cout<<cnt;
    return 0;
}
