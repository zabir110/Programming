#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int cnt=0,m=0;
    for(int i=0; i<a.length()-1; i++)
    {
        if(a[i]=='V'&& a[i+1]=='K') cnt++;
		else if(a[i]=='V' && a[i+1]=='V' && m==0){
			cnt++;
			a[i+1]='K';
			m=1;
        }
        else if(a[i]=='K' && a[i+1]=='K' && m==0){
			cnt++;
			a[i]='V';
			m=1;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
