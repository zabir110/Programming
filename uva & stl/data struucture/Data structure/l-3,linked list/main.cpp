#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *link;

};
node *head=NULL,*temp,*tem,*t,*now=head;
int insertion(int data)
{
    node *ptr;
    if(data<2)
    {
        ptr=new node();
        ptr->info=data;
        ptr->link=NULL;
        if(head==NULL)
        {
            head=ptr;
            tem=ptr;
        }
        else
        {
            tem->link=ptr;
            tem=ptr;
        }
    }
    else if(data>=2)
    {
        ptr=new node();
        tem->link=ptr;
          ptr->link=NULL;
        if(now==head)
        {
            ptr->info=tem->info+now->info;
            t=ptr;
        }
        else
        {
			  ptr->info=temp->info+now->info;
			  t->link=ptr;
        }
        now=now->link;
        tem=tem->link;
    }

}
void  traverse()
{
    node *str;
    str=head;
    while(str!=NULL)
    {
        cout<<str->info<<" ";
        str=str->link;
    }

}
int first_in(int x)
{
    node *ptr;
    ptr=new node();
    ptr->info=x;
    ptr->link=head;
    head=ptr;
}
int last_in(int y)
{
    node *srt,*ptr;
    ptr=new node();
    srt=head;
    while(srt->link!=NULL)
    {
        srt=srt->link;
    }
    ptr->info=y;
    srt->link=ptr;
    ptr->link=NULL;

}

int main()
{
    int n,item,p;
    cout<<"Give me the item:";
    cin>>n;
    for(int i=0; i<2; i++)
    {
        insertion(i);
    }
    for(int i=2; i<9; i++)
    {
        insertion(i);
    }
    cout<<"\n";
    traverse();

//cout<<"\nEnter a element to 1st in:"<<endl;
//int x;
//cin>>x;
//first_in(x);
//traverse();
//cout<<"\nEnter a element to last in:"<<endl;
//int y;
//cin>>y;
//last_in (y);
//traverse();
    return 0;
}
/*
	Give me the item:5
3 5 7 8 9

3 5 7 8 9
Enter a element to 1st in:
1
1 3 5 7 8 9
Enter a element to last in:
6
1 3 5 7 8 9 6
Process returned 0 (0x0)   execution time : 18.002 s
Press any key to continue.

*/
