#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *link;
};
node *head=NULL,*temp;
int insertion(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
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


int delete_1st()
{
    node *str;
    head=head->link;
}


int delete_last()
{
    node *str,*temp;
    for(str=head; str!=NULL;)
    {
        if(str->link==NULL)
        {
            temp->link=NULL;
            break;
        }
        else
        {
            temp=str;
            str=str->link;
        }
    }
}


int delete_given(int data)
{
    node *str,*temp;
    int m=0;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            temp->link=str->link;
            m=1;
            break;
        }
        else
        {
            temp=str;
            str=str->link;
        }
    }
    if(m==0) cout<<"Data not found & remains unchanged:";
}


int delete_after(int data)
{
    node *str,*temp;
    int m=0;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            temp=str->link;
            str->link=temp->link;
            m=1;
            break;
        }

        else
        {
            str=str->link;
        }
    }
      if(m==0) cout<<"Data not found & remains unchanged:";
}


int delete_before(int data)
{
    node *str,*temp=NULL,*ptr=NULL;
    int m=0;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            ptr->link=temp->link;
            m=1;
            break;

        }
        else
        {
            ptr=temp;
            temp=str;
            str=str->link;
        }
    }
      if(m==0) cout<<"Data not found & remains unchanged:";
}


int main()
{
    int n,item,p;
    cout<<"Give me the item:";
    cin>>n;
    cout<<"\nData loading: ";
    for(int i=0; i<n; i++)
    {
        cin>>item;
        insertion(item);
    }
    cout<<"\n";
    traverse();

while(1){
cout<<"\n\nEnter:  \npress 1 to see the item:\npress 2 for exit\n\n";
int p;
cout<<"Choose:";
cin>>p;
if(p==1){
    cout<<"\n\nEnter:\n\n  1:Delate 1st press 1\n  2:Delate last press 2\n  3:Delete item press 3\n  4:Delete before item press 4\n  5:Delete after item press 5\n";
    int press;
    cout<<"\nitem:";
    cin>>press;
    if(press==1){
    delete_1st();
    traverse();
    cout<<"\n\n";
    }
    if(press==2){
    delete_last();
    traverse();
     cout<<"\n\n";
    }
    if(press==3){
    int data;
    cout<<"\ndata:";
    cin>>data;
    delete_given(data);
    traverse();
     cout<<"\n\n";
    }
    if(press==4){
    int data1;
    cout<<"\ndata:";
    cin>>data1;
    delete_before(data1);
    traverse();
     cout<<"\n\n";
    }
    if(press==5){
    int data2;
    cout<<"\ndata:";
    cin>>data2;
    delete_after(data2);
    traverse();
     cout<<"\n\n";
    }}
    if(p==2) break;}
    return 0;
}
