#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    stack<char>s;
    cin>>a;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='('||a[i]=='{'||a[i]=='[') s.push(a[i]);
        else if(a[i]==')'||a[i]=='}'||a[i]==']')
        {
            if(a[i]==')')
            {
                if(s.top()=='(')
                {
                    s.pop();
                    continue;
                }
                else
                {
                    cout<<" Unbalanced";
                    return 0;
                }
            }
          else if(a[i]=='}')
            {
                if(s.top()=='{')
                {
                    s.pop();
                    continue;
                }
                else
                {
                    cout<<" Unbalanced";
                    return 0;
                }
            }
           else if(a[i]==']')
            {
                if(s.top()=='[')
                {
                    s.pop();
                    continue;
                }
                else
                {
                    cout<<" Unbalanced";
                    return 0;
                }
            }
        }
    }
    if(s.empty()) cout<<"Balanced";
    return 0;
}
