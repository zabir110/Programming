#include <iostream>

using namespace std;
class node
{
public:
    int info;
    node *link_back,*link_forw;
};
node *first=NULL,*last=NULL,*temp=NULL;

void insertion(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link_back=NULL;
    ptr->link_forw=first;
    if(first==NULL)
    {
        first=ptr;
        temp=ptr;
    }
    else
    {
        temp->link_forw=ptr;
        ptr->link_back=temp;
        temp=ptr;
        last=ptr;
    }
}
void traverse ()
{
    node *str;
    for(str=first; ;)
    {
        if(str->link_forw==first)
        {
            cout<<str->info<<"";
            break;
        }
        else
        {
            cout<<str->info<<" ";
            str=str->link_forw;
        }
    }
}
void  insert_first(int data)
{

    node *ptr,*str,*s;
    ptr=new node();
    ptr->info=data;
    ptr->link_back=NULL;
    ptr->link_forw=first;
    first->link_back=ptr;
    s=first;
    for(str=first;;)
    {
        if(str->link_forw==s)
        {
            str->link_forw=ptr;
            break;
        }
        else{
			str=str->link_forw;
        }
    }
      first=ptr;
}
void  insert_last(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->link_back=last;
    ptr->link_forw=last->link_forw;
    last->link_forw=ptr;
    last=ptr;
}
void insert_givenafter()
{
    int data;
    int element;
    cin>>element;
    cout<<"\nData:";
    cin>>data;
    node *ptr,*str,*temp;
    ptr=new node();

    for(str=first; str!=NULL;)
    {
        if(last->info==element)
        {
            insert_last(data);
            break;
        }
        else if(str->info==element)
        {
            ptr->info=data;
            ptr->link_forw=str->link_forw;
            ptr->link_back=str;
            temp=str->link_forw;
            temp->link_back=ptr;
            str->link_forw=ptr;
            break;
        }
        else
        {
            str=str->link_forw;
        }
    }
}
void  insert_givenbefore()
{
    int data;
    int element;
    cin>>element;
    cout<<"\nData:";
    cin>>data;
    node *ptr,*str,*temp;
    ptr=new node();

    for(str=first; str!=NULL;)
    {
        if(first->info==element)
        {
            insert_first(data);
            break;
        }
        else if(str->info==element)
        {
            ptr->info=data;
            temp=str->link_back;
            temp->link_forw=ptr;
            ptr->link_back=temp;
            ptr->link_forw=str;
            str->link_back=ptr;
            break;
        }
        else
        {
            str=str->link_forw;
        }
    }
}
void delete_first()
{
    node *str,*temp,*s;
    s=first;
    first=first->link_forw;
    first->link_back=NULL;
    for(str=first;;)
    {
        if(str->link_forw==s)
        {
            str->link_forw=first;
            break;
        }
        else{
			str=str->link_forw;
        }
    }
}
void delete_last()
{
    last=last->link_back;
    last->link_forw=first;
}
void delete_given()
{
    int data;
    cout<<"\nData:";
    cin>>data;
    node *str,*temp,*temp2;
    for(str=first; str!=NULL;)
    {
        if(first->info==data)
        {
            delete_first();
            break;
        }
        else if(str->info==data)
        {
            temp=str->link_back;
            temp2=str->link_forw;
            temp->link_forw=temp2;

            temp2->link_back=temp;
            break;
        }
        else
        {
            str=str->link_forw;
        }

    }
}
void delete_after()
{
    cout<<"\nWhich Element after: \n";
    int element;
    cin>>element;
    node *str,*temp,*temp2;
    for(str=first; str!=NULL;)
    {
        if(str->link_forw==last && str->info==element)
        {
            delete_last();
            break;
        }
        if(str->info==element)
        {
            temp=str->link_forw;
            temp2=temp->link_forw;
            str->link_forw=temp2;
            temp2->link_back=str;
            break;
        }
        else
        {
            str=str->link_forw;
        }

    }
}
void delete_before()
{
    cout<<"\nWhich Element after: \n";
    int element;
    cin>>element;
    node *str,*temp,*temp2;
    for(str=first; str!=NULL;)
    {
        if(str->link_back==first && str->info==element)
        {
            delete_first();
            break;
        }
        else if(str->info==element)
        {
            temp=str->link_back;
            temp2=temp->link_back;
            temp2->link_forw=str;
            str->link_back=temp2;
            break;
        }
        else
        {
            str=str->link_forw;
        }
    }

}
int main()
{
    cout << "Number of  element :" << endl;
    int n;
    cin>>n;
    cout<<"\nData:\n";
    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        insertion(data);
    }
    traverse();
   // cout<<"\nEnter\n     Press 1: Insert\n     Press 2:Delete\n";
 //   int choose;
   // cout<<"\nchoose:";
  //  cin>>choose;
    // if(choose==1)
    //  {
    {
    cout<<"\nInsert first:\n";
     int data;
    cout<<"\nData:";
    cin>>data;
    insert_first(data);
    traverse();
    }
    {
    cout<<"\nInsert last:\n";
    int data;
    cout<<"\nData:";
    cin>>data;
    insert_last(data);
    traverse();
    }
    cout<<"\nInsert given after  :\n";
    insert_givenafter();
    traverse();
    cout<<"\nInsert given before:\n";
    insert_givenbefore();
    traverse();
    //  }
    //  if(choose==2){
    cout<<"\nDelete first:";
    delete_first();
    traverse();
    cout<<"\nDelete last:";
    delete_last();
    traverse();
    cout<<"\nDelete given:";
    delete_given();
    traverse();
    cout<<"\nDelete given after:";
    delete_after();
    traverse();
    cout<<"\nDelete given before:";
    delete_before();
    traverse();
    //}
    return 0;
}
