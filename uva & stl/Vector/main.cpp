#include <iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main()
{
//   vector<int> v={1,2,3,4,5,6,7,8,9,10};
//   for(vector<int>::iterator it=v.begin();it!=v.end();++it) cout<<*it<<" ";
//   cout<<endl;
//   cout<<"vector size:"<<v.size()<<endl;
//   cout<<"Front:"<<v.front()<<endl;
//   cout<<"Back:"<<v.back()<<endl;
//   cout<<"Insert 40 at begin 5"<<endl;
//   v.insert(v.begin()+5,40);
//   cout<<"v[5]:"<<v[5]<<endl;
//   cout<<"Erase at begin 5:"<<endl;
//   v.erase(v.begin()+5);
//    cout<<"v[5]:"<<v[5]<<endl;
//    cout<<"Push_back at 45:"<<endl;
//    v.push_back(45);
//    cout<<v.back()<<endl;
//    Array to vector
//    const int size =10;
//    int a[size]={11,12,13,14,15,16,17,18,19,20};
//    vector<int>v1{a,a+size};
//
//    cout<<"New vector initialize by array:"<<endl;
//    for(int i=0;i<size;i++) cout<<v1[i]<<" ";
//    cout<<endl;
    freopen("t.txt","r",stdin);
   long long  int a,m,cnt;
    long long int i=0;
    set<long long int>s;
    while(cin>>a)
    {
        s.insert(a);
        i++;
        if(i%2!=0)
        {
            m=i/2;
            auto it=s.begin();
            for(int i=0;i<=m;it++){
				if(i==m)
			cout<<*(it)<<endl;
            }
        }
        else
        {
			          m=i/2;
            auto it=s.begin();
			   for(int i=1;i<=m;it++){
				if(i==m)
			cout<<(*(it)+*(++it))/2<<endl;
            }
    }
    }
    return 0;
}
