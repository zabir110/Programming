#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j=1;
    cin>>a>>b;
    for(i=0;; i++)
    {
        a=a*3;
        b=b*2;
        if(a>b) break;
        else j++;
    }
    cout<<j;
    return 0;
}
