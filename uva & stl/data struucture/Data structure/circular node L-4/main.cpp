#include <iostream>

using namespace std;
class node
{
public:
    int info;
    node *link;
};
node *head=NULL,*temp=NULL;
void insertion(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link=head;
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
void traverse()
{
    node *str;
    for(str=head;;)
    {
        if(str->link==head)
        {
            cout<<" "<<str->info;
            break;
        }
        cout<<" "<<str->info;
        str=str->link;
    }
}
void insert_1st(int data)
{
    node *ptr,*str,*temp;
    ptr=new node();
    ptr->info=data;
    ptr->link=head;
    for(str=head;str->link!=head;str=str->link)
        {
        }
    str->link=ptr;
     head=ptr;
}
void    insert_last(int data)
{
    node *ptr,*str;
    ptr=new node();
    ptr->info=data;
    for(str=head;;){
        if(str->link==head){
            ptr->link=head;
            str->link=ptr;
            break;
        }
        else{
            str=str->link;
        }
    }
}
void after_insert()
{
    cout<<"\nInsert After the element:\n";
    int element;
    cin >>element;
    cout<<"\nData:";
    int data;
    cin>>data;
    node *ptr,*str;
    ptr=new node();
    ptr->info=data;
    for(str=head;;){
        if(str->info==element && str->link==head){
            insert_last(data);
            break;
        }
        else if(str->info==element){
            ptr->link=str->link;
            str->link=ptr;
            break;
        }
            else{
                str->=link;
            }
        }
    }
void  before_insert()
{
     cout<<"\nInsert Before the element:\n";
    int element;
    cin >>element;
    cout<<"\nData:";
    int data;
    cin>>data;
    node *ptr,*str,*temp;
    ptr=new node();
    ptr->info=data;
    for(str=head;;){
        if(str->info==element && str==head){
           insert_1st(data);
           break;
        }
        else if(str->info==element ){
            ptr->link=str;
            temp->link=ptr;
            break;
        }
        else {
                temp=str;
            str=str->link;
        }
    }
}
int main()
{
    cout << "Enter the no. of element:\n" ;
    int n;
    cin>> n;
    cout<<"Data:";
    for(int i=0; i<n; i++)
    {

        int data;
        cin>>data;
        insertion(data);
    }
    traverse();
    cout<<"\n1st insert Data:";
    int data;
    cin>>data;
    insert_1st(data);
    traverse();
     cout<<"\nLast insert Data:";
    int data1;
    cin>>data1;
    insert_last(data1);
    traverse();
    after_insert();
    traverse();
    before_insert();
    traverse();
    return 0;
}
