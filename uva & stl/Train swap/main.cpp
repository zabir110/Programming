#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("t.txt","r", stdin);
//    int N,cnt=0;
//    int L;
//    cin>>N;
//    for(int k=0;k<N;k++){
//		cnt=0;
//		int a[100];
//		cin>>L;
//		for(int i=0;i<L;i++)
//				cin>>a[i];
//
//		for(int i=0;i<L;i++){
//				for(int j=i+1;j<L;j++)
//				if(a[i]>a[j]) cnt++;
//		}
//		cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
//    }
    string a;
    int m,check=0;
    stack<char>s;
    while(getline(cin,a))
    {
        check=0;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]>='0'&& a[i]<='9')
            {
                int x=a[i]-'0';
                int y=a[i+1]-'0';
                int z=a[i+2]-'0';
                int sum=y*10+x;
                if(sum<32){
					  sum=z*100 +y*10+x;
					  i++;
                }
                char a=sum;
                //	cout<<a;
                s.push(a);
                i++;
                check=1;
            }
        }
        if(check!=1){
          for(int i=a.length()-1; i>=0; i--)
        {
                int x=a[i];
                while(x)
                {
                    m=x%10;
                    x/=10;
                    cout<<m;
                }
            }
        }
        while(!s.empty() && check==1)
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;

    }

    return 0;
}
