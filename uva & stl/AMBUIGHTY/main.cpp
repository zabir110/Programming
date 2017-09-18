#include <iostream>

using namespace std;
class m
{
public:
	virtual void display(){}
};
class n:public m
{
public:
	void d(){cout<<"lll";}
};


int main()
{
    n *obj;
    obj->d();
    return 0;
}
