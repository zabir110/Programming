#include <iostream>

using namespace std;

int main()
{
  char s[110];
    int n,k;
    cin>>n;
    cin>>s;
    cin>>k;
    k=k%26;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a'&& s[i]<='z')
    {
    	int t=s[i]+k;
    		 s[i]=s[i]+k;
        if(t >'z')
            {
				s[i]=(s[i]-'z'-1)+'a';
            }
            }
        else if(s[i]>='A'&& s[i]<='Z'){
				 int t=s[i]+k;
				 s[i]=s[i]+k;
			  if(t > 'Z') {
						s[i]=(s[i]-'Z'-1)+'A';
                }
            }
        else continue;
        }
cout<<s<<endl;
    return 0;
}
