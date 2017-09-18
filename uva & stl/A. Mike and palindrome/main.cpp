#include <iostream>
#include<string>
using namespace std;

//int main()
//{
//    string a;
//    cin>>a;
//    int p=1,m=0;
//    for(int i=0,j=a.length()-1; i<a.length()/2; j--,i++)
//    {
//        if(a[i]==a[j]) continue;
//        else if(a[i]!=a[j] && p==1)
//        {
//            p++;
//        }
//        else
//        {
//            cout<<"NO"<<endl;
//    return 0;
//        }
//    }
//    if(p==2 ||a.length()%2!=0 )
//        cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
//    return 0;
//}

int main()
{
    string a;
    cin>>a;
    if(a[8]=='A')
    {
        if(a[0]=='1'&& a[1]=='2')
        {
            a[0]='0';
            a[1]='0';
        }
        a[8]=' ';
        a[9]=' ';
        cout <<a;
    }
    else
    {
        a[8]=' ';
        a[9]=' ';

        if(a[0]=='1'&& a[1]=='2') cout<<a;
        else
        {
            a[0]=a[0]+1;
            a[1]=a[1]+2;
            cout<<a;
        }
    }
    return 0;
}

