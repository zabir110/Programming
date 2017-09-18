#include <iostream>

using namespace std;

int main()
{
    vector<int > v,v1;
    string a;
    int mod,sum=0;
    cin>>a;
    int l=a.length();
    string ::iterator it=a.begin();
    for(int i=0; i<l-1; i++)
    {
        if(a[i]=='0' && i==0)
        {
            a.erase(a.begin());
            --i;
        }
        else
        {
            sum=sum+int (a[i]);
            if(a[i]%3==2) v1.push_back(i);
            if(a[i]%3==1) v.push_back(i);
        }
    }

    if(sum%3==0) cout<< a;
    else(sum%3==1)
    {
        if(v.empty())
        {
        	if(!v1.empty())

			{
            a.erase(a.begin()+v1[0]);
            v1.erase(v1.begin());
            if(v1.empty()) cout<<"-1"<<endl;
            else
			{
				     a.erase(a.begin()+v1[0]);
				     cout<<a<<endl;
			}
			}

        }
        else
		{
			a
			.erase(a.begin()+v[0]);
		}

    }
    return 0;
}
