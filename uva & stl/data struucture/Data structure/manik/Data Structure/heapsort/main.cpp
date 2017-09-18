#include <iostream>

using namespace std;

int main()
{
    int i,n,t;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"After sorting: ";
    while (1)
    {
        for(i=n/2-1; i>=0; i--)
        {
            if(n%2!=0)
            {
                if(a[2*i+1]>a[2*i+2])
                {
                    if(a[i]>a[2*i+2])
                        swap(a[i],a[2*i+2]);
                }
                else
                {
                    if(a[i]>a[2*i+1])
                        swap(a[i],a[2*i+1]);
                }
            }
            else
            {
                if(a[i]>a[2*i+1])
                        swap(a[i],a[2*i+1]);
            }
        }

        cout<<a[0]<<" ";
        a[0]=a[n-1];
        n--;
        if(n==0)
            break;
    }
    return 0;
}
