#include <iostream>

using namespace std;
//DECLARE A CLASS
class node
{
public:
    int info1,info2,info3;
    node *link1,*link2,*link3;
};
node *head1=NULL,*temp1,*temp2,*temp3,*head2=NULL,*head3=NULL;
//definition of link list 1:
void insertion1(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info1=data;
    ptr->link1=NULL;
    if(head1==NULL)
    {
        head1=ptr;
        temp1=ptr;
    }
    else
    {
        temp1->link1=ptr;
        temp1=ptr;
    }

}
//FOR PRINT OUT THE ITEMS
void traverse1()
{
    node *str;
    for(str=head1; str!=NULL;)
    {
        cout<<str->info1<<" ";
        str=str->link1;
    }
}
//definition of link list 2:
void insertion2(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info2=data;
    ptr->link2=NULL;
    if(head2==NULL)
    {
        head2=ptr;
        temp2=ptr;
    }
    else
    {
        temp2->link2=ptr;
        temp2=ptr;
    }

}
void traverse2()
{
    node *str;
    for(str=head2; str!=NULL;)
    {
        cout<<str->info2<<" ";
        str=str->link2;
    }
}

void copy_link()
{
    node *str,*ptr;
    for(str=head1; str!=NULL; str=str->link1)
    {
        ptr =new node();
        ptr->info3=str->info1;
        ptr->link3=NULL;

        if(head3==NULL)
        {
            head3=ptr;
            temp3=ptr;
        }
        else
        {
            temp3->link3=ptr;
            temp3=ptr;
        }

    }
}
void sort_link(int data)
{
    node *ptr,*str;
    int m=1;
    ptr =new node();
    for(str=head3; str!=NULL;)
    {

        if(head3->info3 >= data)
        {
            ptr->info3=data;
            ptr->link3=str;
            head3=ptr;
            m=0;
            break;
        }
        if(str->info3 >= data)
        {
            ptr->info3=data;
            ptr->link3=temp3->link3;
            temp3->link3=ptr;
            m=0;
            break;
        }
        else
        {
            temp3=str;
            str=str->link3;
        }
    }
    if(m!=0)
    {
        ptr->info3=data;
        temp3->link3=ptr;
        ptr->link3=NULL;
    }

}
void traverse3()
{
    node *str;
    for(str=head3; str!=NULL;)
    {
        cout<<str->info3<<" ";
        str=str->link3;
    }
}
void sort_()
{
    node *srt;
    int change;
    srt=head3;

    for(; srt!=NULL;)
    {
        temp3=srt->link3;
        for(; temp3!=NULL;)
        {
            if(srt->info3 >=  temp3->info3 )
            {
                change=srt->info3;
                srt->info3=temp3->info3;
                temp3->info3=change;
            }
            temp3=temp3->link3;
        }
        srt=srt->link3;

    }
}
int main()
{
    //start link list 1:
    cout << "Linked list 1:" << endl;
    cout<<"Data item:"<<endl;
    int n1;
    cin >>n1;
    cout<<"Data:"<<endl;
    for(int i=0; i<n1; i++)
    {
        int data;
        cin>>data;
        insertion1(data);
    }
    traverse1();
    //start link list 2:
    cout << "\nLinked list 2:" << endl;
    cout<<"Data item:"<<endl;
    int n2;
    cin >>n2;
    cout<<"Data:"<<endl;
    for(int i=0; i<n2; i++)
    {
        int data;
        cin>>data;
        insertion2(data);
    }
    traverse2();
    cout<<"\nLink list 3:\n";

    //start the link list 3:

    copy_link();
    cout<<"\nAfter Copying: ";
    traverse3();
    //After Copying: ";
    cout<<"\nAfter sort the copying items:";
    sort_();
    traverse3();
    // After sort the copying items:
    node *str;
    for(str=head2; str!=NULL; str=str->link2)
    {
        int data=str->info2;
        sort_link(data);
    }
    //Now sort  items:
    cout<<"\nNow sort  items:";
    traverse3();
    return 0;
}
