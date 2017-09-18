#include <iostream>
#include<utility>
using namespace std;

int main()
{
	/*INITIALIZATION WITH VALUE*/
	pair<string,string>p("Zabir","01521307471");
	int no;
	string name;
	cin>>name>>no;
	/*INPUT BASED INITIALIZATION*/
	pair<string,int> p1(name,no);
	cout<<p.first<< " "<<p.second<<endl;
	cout<<p1.first<< " "<<p1.second;
    return 0;
}
