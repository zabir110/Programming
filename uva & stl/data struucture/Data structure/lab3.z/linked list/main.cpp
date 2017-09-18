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
int traverse()
{
    node *srt;
    for(srt=head; srt!=NULL;)
    {
        cout<<srt->info<<" ";
        srt=srt->link;
    }
}
int first_in(int x)
{

    node *ptr;
    ptr=new node;
    ptr->info=x;
    ptr->link=head;
    head=ptr;

}
int last_in(int y)
{
    node *srt,*ptr;
    ptr=new node();
    for(srt=head; srt->link!=NULL; srt=srt->link)
    {

    }
    srt->link=ptr;
    ptr->info=y;
    ptr->link=NULL;

}
int insert_after(int item)
{
    int data;
    cout<<"Data:";
    cin>>data;
    node *ptr,*srt;
    ptr=new node();
    ptr->info=data;
    for(srt=head; srt!=NULL;)
    {
        if(srt->info==item)
        {
            ptr->link=srt->link;
            srt->link=ptr;
            break;
        }
        else
        {
            srt=srt->link;
        }
    }
}
int insert_before(int item)
{

    int data;
    cout<<"Data:";
    cin>>data;
    node *ptr,*srt,*temp;
    ptr=new node();
    ptr->info=data;
    for(srt=head;;)
    {
        if(srt->info==item)
        {
            ptr->link=temp->link;
            temp->link=ptr;
            break;
        }
        else
        {
            temp=srt;
            srt=srt->link;
        }
    }

}
int searching_unsorted(int data)
{
    node *str,*loc=NULL;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            loc=str;
            break;
        }
        else
        {
            str=str->link;
        }
    }
    if(loc==NULL) cout<<"Item doesn't find!"<<endl;
    else cout<<"Location:"<<loc<<endl;
}
int  searching_sorted(int data)
{
    node *str,*loc=NULL;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            loc=str;
            break;
        }
        else if(str->info<data)
        {
            str=str->link;
        }
        else break;
    }
    if(loc==NULL) cout<<"Item doesn't find!"<<endl;
    else   cout<<"Location:"<<loc<<endl;
}
int delete_1st()
{
    node *str;
    head=head->link;
}
int delete_last()
{
    node *str,*temp=NULL;
    for(str=head;;)
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
int delete_item(int data)
{
    node *str,*temp;
    for(str=head; str!=NULL;)
    {
        if(str->info==data)
        {
            temp->link=str->link;
            break;
        }
        else
        {
            temp=str;
            str=str->link;
        }
    }
}
int delete_previous(int item)
{
    node *ptr=NULL,*temp=NULL,*str;
    for(str=head; str!=NULL;)
    {
        if(str->info==item)
        {
            temp->link=str;
            break;
        }
        else
        {
            temp=ptr;
            ptr=str;
            str=str->link;
        }
    }
}
int delete_next(int item)
{
    node *str,*temp;
    for(str=head; str!=NULL;)
    {
        if(str->info==item)
        {
            str->link=temp->link;
            break;
        }
        else
        {
            str=str->link;
            temp=str->link;
        }
    }


}
int main()
{
    int n;
    cout<<"Enter the item:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int item;
        cin>>item;
        insertion(item);
    }
    traverse();

    while(1)
    {
        int a;
        cout<<"\nChoise press 1 for continue\npress 0 for exit:"<<endl;
        cin>>a;
        if(a==0) break;



        cout<<"\n1st in New element:"<<endl;
        int x;
        cin>>x;
        first_in(x);
        traverse();
        cout<<"\nlast in New element:"<<endl;

        int y;
        cin>>y;
        last_in(y);
        traverse();
        int item;
        cout<<"\nEnter insert after:"<<endl;
        cin>>item;
        insert_after(item);
        traverse();
        cout<<"\nEnter insert before:"<<endl;
        int item2;
        cin>>item2;
        insert_before(item2);
        traverse();
        cout<<"\nIf array is sorted Press 1 or for unsorted press 2:"<<endl;
        int press;
        cin>>press;
        if(press==1)
        {

            cout<<"Which data you want search:"<<endl;
            int data;
            cin>>data;
            searching_sorted(data);

        }
        if(press==2)
        {
            cout<<"Which data you want search:"<<endl;
            int data;
            cin>>data;
            searching_unsorted(data);
        }
        cout<<"\nIf you want to delete:\n1st item press:3\nlast item press:4\ndelete press:5"<<endl;
        int p;
        cin>>p;
        if(p==3)
        {
            delete_1st();
            traverse();
        }
        if(p==4)
        {
            delete_last();
            traverse();
        }
        if(p==5)
        {
            cout<<"\nDelete exact element press 0\nprevious element:press 1:\nNext element press 2:"<<endl;
            int element;
            cin >>element;
            if(element==1)
            {
                cout<<"Give me prevoius delete item:"<<endl;
                int item;
                cin>>item;
                delete_previous(item);
                traverse();
            }
            if(element==0)
            {
                cout<<"Give me exact delete item:"<<endl;
                int item;
                cin>>item;
                delete_item(item);
                traverse();
            }
            if(element==2)
            {
                cout<<"Give me next delete item:"<<endl;
                int item;
                cin>>item;
                delete_next(item);
                traverse();
            }
        }
    }



    return 0;
}
