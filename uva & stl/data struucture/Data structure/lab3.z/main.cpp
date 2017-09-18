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

int insert_first(int new1)
{
    node *ptr;
    ptr=new node();
    ptr->info=new1;
    ptr->link=head;
    head=ptr;
}
int insert_last(int new2)
{
    node *str,*ptr;
    ptr=new node();
    str=head;
    while(str->link!=NULL)
    {
        str=str->link;
    }
    ptr->info=new2;
    str->link=ptr;
    ptr->link=NULL;
}

int main()
{
    int n,item,p,new1,new2;
    cout<<"Give me the item:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>item;
        insertion(item);
    }
    cout<<"\n";
    traverse();

    cout<<"\nInsert a 1st element:"<<endl;
    cin>>new1;
    insert_first(new1);
    traverse();
    cout<<endl;
    cout<<"Insert a last element:"<<endl;
    cin>>new2;
    insert_last(new2);
    traverse();
    return 0;
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
}
