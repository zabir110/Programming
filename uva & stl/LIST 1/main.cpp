#include <iostream>
#include<list>
using namespace std;
void display(list<string>lst)
{
    list<string>:: iterator it=lst.begin();
    while(it!=lst.end())
    {
        cout<<*it<<endl;
        ++it;
    }
}
void display(list<int >lst)
{
    list<int>:: iterator it=lst.begin();
    while(it!=lst.end())
    {
        cout<<*it<<endl;
        ++it;
    }
}
int main()
{
    list<string>lst;
    lst.push_back("zabir");
    lst.push_back("bbb");
    lst.push_back("name");
    lst.push_front("aaa");
    display(lst);

    cout<<"1st item:"<<lst.front()<<endl;
    cout<<"last item:"<<lst.back()<<endl;
    cout<<"Reverse:"<<endl;
    lst.reverse();
    display(lst);
    cout<<"Sort:"<<endl;
    lst.sort();
    display(lst);
    cout<<"Remove:"<<endl;
    lst.remove("zabir");
    display(lst);
    lst.pop_back();
    lst.pop_front();
    cout<<"POP front & back:"<<endl;
    display(lst);
    lst.clear();
    if(lst.empty()) cout<<"list is empty:";
    list<int> l= {1,2,3,4,5,6,7,8,9,10};
    list<int>::iterator it=l.begin();
     list<int>::iterator it1=l.begin();
    while(*it!=5) ++it;
    cout<<"Insert 112 before 5"<<endl;
    l.insert(it,112);
    while(*++it1!=7);
    cout<<"Earse 7"<<endl;
    l.erase(it);
    display(l);

    return 0;
}
