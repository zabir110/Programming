#include <iostream>
using namespace std;
int main ()
{
    char c;
    cin >> c;
	if(c=='z')
	{
		cout << "Enter two digits to add " << endl;
		int a,b;
		cin >> a >> b; // >> endl;
		cout << a+b << endl;
	}
	return 0;
}
