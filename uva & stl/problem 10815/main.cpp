#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char a[10000000];
int main()
{
    freopen("m.txt","r", stdin);
    set<string>tree;

    while ( gets (a) )
   {
        string str=" ";
        for(int i=0; a[i]; i++)
        {
            if( isalpha  ( a [i] ) )    str+=tolower(a[i]);
            else 	str+=" ";
        }
        //akta full string ta ai box reke  ja theke akta akta string token hisebe nibe
        stringstream sin(str);

        string token;

        while(sin>>token)
        {
            tree.insert(token);
        }
 }
        for(set<string>::iterator it=tree.begin(); it!=tree.end(); it++)
        {
            cout<<*it<<endl;
        }


    return 0;
}
