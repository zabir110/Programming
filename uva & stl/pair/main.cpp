#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int ,string>p(123,"zabir");
    cout<<p.first<<" "<<p.second<<endl;
    pair<string,int>p1;
    p1=make_pair("zabir1",88);
       cout<<p1.first<<" "<<p1.second<<endl;
       /*Store three data same as pair*/
       tuple<string,string,string>t("one","two","three");
       cout << get<0>(t) <<" "<< get<1>(t) <<" " << get<2>(t) <<endl;
       /*another process to print tuple*/
       string a,b,c;
       tie(a,b,c)=t;
       cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
