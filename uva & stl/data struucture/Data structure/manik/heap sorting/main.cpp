#include <iostream>

using namespace std;

int main()
{
    int n;cout<<"Enter the element number"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Traversing"<<endl;
    while(n)
    {
        for(int i=n/2;i>=1;i--)
        {
            if(n%2!=0)
            {
                if(a[2*i-1]>a[2*i])
                {
                    if(a[i-1]>a[2*i])
                    {
                        swap(a[i-1],a[2*i]);
                    }
                }
                else
                {
                    if(a[i-1]>a[2*i-1])
                        swap(a[i-1],a[2*i-1]);
                }
            }
            else
                if(a[i-1]>a[2*i-1]) swap(a[i-1],a[2*i-1]);
        }
        cout<<a[0]<<endl;
        a[0]=a[n-1];
        n--;
    }


    return 0;
}
