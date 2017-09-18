#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int value,str,no,sum=0;
    cin>>str>>no;
    string a,string1;
    map<string,int>mp;
     map<string,int>::iterator it=mp.begin();
    char sentence[1000000];
    for(int i=0; i<str; i++)
    {
        cin>>a>>value;
        mp[a]=value;

    }
    for(int i=0; i<no; sum=0,i++)
    {

        while(scanf("%s",sentence)){
            if(strcmp(sentence,".")==0)
                break;
            else
            {
                string1=(string)sentence;
                it=mp.find(string1);
                if(it!=mp.end())
                    sum=sum+mp[string1];
            }
        }
        cout<<sum<<"\n";

    }


    return 0;
}
