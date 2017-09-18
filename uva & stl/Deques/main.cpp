#include <iostream>
  #include<deque>
using namespace std;

int main()
{
    deque< string>dq;
     dq.push_back("cust 1");
     dq .push_front("cust 2");
     dq.push_back("cust 3 ");
     dq.push_back("cust 4");
     dq.push_back("cust 5");
     for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<endl;
     }
     dq.pop_back();
    dq.pop_front();
     for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<endl;
     }
     cout<<"size of deques:"<<dq.size()<<endl;
     deque<string>::iterator it=dq.begin();
     ++it;
dq.insert(it,"zabir");
for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<endl;
     }
    return 0;
}
