#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("t.txt","r",stdin);
    int n;
    while(1)
    {
       A: cin>>n;
        if(n==0) return 0;
        for(int i=1; i<sqrt(n); i++)
        {
            for(int j=0; j<i; j++)
            {
                if(n==(pow(i,3)-(pow(j,3))))
                {
                    cout<<i<<" "<<j<<endl;
                    goto A ;
                }
            }
        }
        cout<<"No solution"<<endl;
    }
    return 0;
}
