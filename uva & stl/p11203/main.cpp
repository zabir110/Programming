#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	//freopen("t.txt","r",stdin);
//    string s;
//    int t,i,m=0,cnt=0,c=0,p=0;
//    cin>>t;
//    while(t--)
//    {
//
//        cin>>s;
//        m=0;
//          for(i=0; i<s.length(); i++)
//        {
//        	if(s[i]=='E'||s[i]=='M'||s[i]=='?') continue;
//        	else{
//				cout<<"no-theorem"<<endl;
//				goto A;
//        	}
//        }
//        for(i=0; i<s.length(); i++)
//        {
//            if(s[i]=='?' ) cnt++;
//            else break;
//        }
//        for( ; i<s.length(); i++)
//        {
//            if(s[i]=='M')
//            {
//                i++;
//                while(s[i]!='E')
//                {
//                    c++;
//                    i++;
//                }
//                break;
//            }
//        }
//        for( ; i<s.length(); i++)
//        {
//            if(s[i]=='?') p++;
//        }
//        if(p-cnt==1&&cnt>=1 && c==1)
//        {
//            cout<<"theorem"<<endl;
//            m=1;
//        }
//        if(m!=1)
//        {
//            for(i=0; i<s.length(); i++)
//            {
//                if(s[i]=='?' ) cnt++;
//                else break;
//            }
//
//            for( ; i<s.length(); i++)
//            {
//                if(s[i]=='M')
//                {
//                    i++;
//                    while(s[i]!='E')
//                    {
//                        c++;
//                        i++;
//                    }
//                    break;
//                }
//            }
//            for( ; i<s.length(); i++)
//            {
//                if(s[i]=='?') p++;
//            }
//            if(cnt>=1 &&c>=2 && p>=2)  cout<<"theorem"<<endl;
//            else  cout<<"no-theorem"<<endl;
//        }
//        A:
//        cnt=0;
//        p=0;
//        c=0;
//
//    }
ll n,f,s,bill;
while(1){
	cin>>n>>f;
	if(n==0 && f==0) break;
	for(int i=0;i<n;i++){
			cin>>bill;
		s+=bill/f;
	}
	cout<<s<<endl;
	s=0;
}
    return 0;
}
