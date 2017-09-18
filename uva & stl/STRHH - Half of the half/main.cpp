#include <iostream>
#include<string>
using namespace std;

int main()
{
    int test,i;
    string a;
    cin>>test;
    while(test--)
    {
        cin>>a;
        i=a.length();
        for(int j=0; j<i/2; j+=2) cout<<a[j];
        cout<<endl;
    }

    return 0;
}
