#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<l; j++)
        {
            if(s[i]==s[j])
            {
                s[i]=' ';
                s[j]=' ';
                break;
            }
        }
    }
    cout<<s<<endl;
    string s1;
    for(int i=0; i<l; i++)
    {
        if(s[i]==' ') continue;
        else
        {
            s1+=s[i];
        }
    }
    if(s1.size()!=0)
        cout<<s1<<endl;
    else cout<<"Empty String"<<endl;

    return 0;
}
