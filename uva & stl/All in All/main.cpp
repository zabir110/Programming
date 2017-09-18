#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int m=0,cnt=0;
    while(cin>>a && cin>>b)
    {
        for(int i=0; i<a.length(); i++)
        {
            for(int j=m; j<b.length(); j++)
            {
                if(a[i]==b[j])
                {
                    m=++j;
                    cnt++;
                    break;
                }

            }
        }
        if(a.length()==cnt) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        cnt=0;
        m=0;
    }
    return 0;
}
