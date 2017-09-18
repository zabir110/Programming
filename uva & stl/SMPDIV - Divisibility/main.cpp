#include <iostream>

using namespace std;

int main()
{
    int n,x,y,t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n>>x>>y;
        for(int i=2; i<n; i++)
        {
            if(i%x==0 && i%y!=0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
