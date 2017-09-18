#include <bits/stdc++.h>

using namespace std;

int a[100];
class node
{
public:
    int data;
    node *nex;
};
class stac
{
public:
    node *t=NULL;
    void pop()
    {
        t=t->nex;
    }
    int top()
    {
        //cout<<"top:"<<ar[t]<<endl;
        return t->data;
    }
    void push(int d)
    {
        node *ptr;
        ptr=new node();
        ptr->data=d;
        ptr->nex=t;
        t=ptr;
    }
    bool empty()
    {
        if(t==NULL) return true;
        else false;
    }
}upper,lower;
int n;
int quick(int beg,int end,int loc)
{
    int left=beg,right=end;
    loc=beg;
    while(1)
    {
        while(a[loc]<=a[right] && loc!=right) right--;
        if(loc==right) return loc;
        if(a[loc]>a[right])
        {
            swap(a[loc],a[right]);
            loc=right;
        }
    while(a[left]<=a[loc] && left!=loc) left++;
        if(loc==left) return loc;
        if(a[left]>a[loc])
        {
            swap(a[left],a[right]);
            loc=left;
        }
    }
}

void sort()
{
    if(n==1) return;
    //stack<int> upper,lower;
    lower.push(0);
    upper.push(n-1);
    while(!lower.empty())
    {
        int l=lower.top();
        lower.pop();
        int r=upper.top();
        upper.pop();
        int loc=l;
        //cout<<2<<endl;
        loc=quick(l,r,loc);
        if(l<loc-1)
        {
            lower.push(l);
            upper.push(loc-1);
        }
        if(r>loc+1)
        {
            lower.push(loc+1);
            upper.push(n-1);
        }
    }
}


int main()
{
    cout<<"No. of value:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
