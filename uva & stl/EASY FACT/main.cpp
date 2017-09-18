#include <iostream>
#include<math.h>
using namespace std;

int main()
{

   long int n,fix=0,cnt=0;
    string a="hackerrank";
    string b;
    cin>>n;
    for(int t=0; t<n; t++)
    {
        cin>>b;
        fix=0;
        cnt=0;
        for(int i=0; i<a.length(); i++)
        {

            for(int j=fix; j<b.length(); j++)
            {
                if(a[i]==b[j])
                {
                    cnt++;
                    fix=++j;
                    break;
                }
            }
        }
        if(cnt==10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

