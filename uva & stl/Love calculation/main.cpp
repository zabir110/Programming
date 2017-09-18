#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
    freopen("t.txt","r",stdin);
    int  sum=0,sum1=0;
    float m=0,n=0;
    string a,b;
    while(getline(cin,a) && getline(cin,b))
    {
        for(int  i=0; i<a.length(); i++)
        {
            if(a[i]>='a'&& a[i]<='z')
                sum +=a[i]-'a'+1;
            else if(a[i]>='A'&& a[i]<='Z') sum +=a[i]-'A'+1;
        }
        for(int  i=0; i<b.length(); i++)
        {
            if(b[i]>='a'&& b[i]<='z')
                sum1 +=b[i]-'a'+1;
            else if(b[i]>='A'&& b[i]<='Z') sum1 +=b[i]-'A'+1;
        }
        while(sum!=0)
        {
            m+=sum%10;
            sum/=10;
            if(m>=10 &&sum==0)
            {
                sum=m;
                m=0;
            }
        }
        while(sum1!=0)
        {
            n+=sum1%10;
            sum1/=10;
            if(n>=10 && sum1==0)
            {
                sum1=n;
                n=0;
            }
        }
        float fst=m/n,scn=n/m;
        if(fst<=1) printf("%.2f %\n",fst*100);
        else printf("%.2f %\n",scn*100);
        sum=0,sum1=0,m=0,n=0;

    }
    return 0;
}
