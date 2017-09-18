#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;
    m["Zabir"]=123;
    m["abir"]=23;
    m["bir"]=3;
    /*insert a into a map via pair*/
    pair<string,int>p("nnn",99);
    m.insert(p);
    /*Aivabe aksatheo kora jai*/
    m.insert({"mm",66});
    /*aksathe insert*/
    m.insert(pair<string,int>("all",100));
    /*print via itaretor*/
    map<string,int >::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<< " "<<it->second<<endl;
        it++;
    }
    /*Print via key*/
    cout<<"Zabir "<<m["Zabir"]<<endl;

    /*Print the size*/
    cout<<"number of size:"<<m.size()<<endl;
    /*find the name in map*/
    string name;
//cin>>name;
    if(m.find(name)!=m.end()) cout<<name<<" "<<m[name]<<endl;
    else cout<<name <<" not found"<<endl;
    /*Erase some data*/
    m.erase("abir");
    /*in multimap which indicate the same name last element*/
    multimap<string,int>mu;
    mu.insert(pair<string,int>("uu",123));
    mu.insert(pair<string,int>("u",13));
    mu.insert(pair<string,int>("uu",23));
    mu.insert(pair<string,int>("uu",3));
    string sea="uu";
    multimap<string,int>::iterator itera=mu.find(sea);
    multimap<string,int >:: iterator last=mu.upper_bound(sea);

    while(itera!=last)
    {
        cout<<itera->first<<" "<<itera->second<<endl;
        ++itera;
    }

    return 0;
}
