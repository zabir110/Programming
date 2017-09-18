#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers:" << endl;
	int a,b;
	int r;
	cin>>a>>b;
	int m=a*b;
	while(1){
	r=a%b;
	if(r==0) break;
	a=b;
	b=r;
	}

	cout<<"GCD:"<<b<<endl;
	cout<<"LCM:"<<m/b;
    return 0;
}
