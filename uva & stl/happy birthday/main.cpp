#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,m=0,n=0;
    cin>>p;
    getchar();
    string b[100];
    string c="Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
    for(int i=0; i<p; i++)
    {
        getline(cin,b[i]);
    }

    stringstream sin(c);
    string d[100];
    int i=0,j=0;
    while(sin>>d[i])
    {
        i++;
    }
    for(int i=0,k=0,j=0; ; i++,j++)
    {

        if(j==16)
        {
            j=0;
        }
        if(i==p)
        {
            i=0;
            n=1;
        }

        cout<<b[i]<<": "<<d[j]<<endl;
        if(n==1 && j==15 ) break;
    }
    //while(1);
    return 0;
}
