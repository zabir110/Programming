#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
   string s3;
    cin>>s1;
    cin>>s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i] ) s3+='z';
        else if(s1[i]>s2[i]) s3+=s2[i];
        else
        {
        	 cout<<"-1"<<endl;
           return 0;
        }
    }

    cout<<s3<<endl;
    return 0;
}
