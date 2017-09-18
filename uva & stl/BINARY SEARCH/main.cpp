#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
   int n;
int b_c(int *a,int key)
{
    int high=n-1;
    int low =0;
    int mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(key==a[mid]) return mid;
        else if (key<a[mid]) high=mid-1;
        else if(key>a[mid]) low=mid+1;
    }
    return mid;
}
int main()
{

    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(&a[0],&a[n]);
    cout<<"Sorted:"<<endl;
     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    int c;
    cout<<"\nFind:";
    cin>>c;
    cout<<"\nIndex: "<<b_c(a,c);

    return 0;
}
