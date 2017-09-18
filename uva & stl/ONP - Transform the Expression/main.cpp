#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string a;
        cin>>a;
        //string ::iterator it =a.begin();
        for(int j=0; j<a.length(); j++)
        {
            if( a[j]=='(' || a[j] ==')'  ) a[j]=' ';
            //	it++;
        }
        cout<<a<<endl;
    }
    return 0;
}
