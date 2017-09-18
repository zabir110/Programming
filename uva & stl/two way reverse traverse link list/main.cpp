#include <iostream>

using namespace std;
class node
{
public:
    int info;
    node *bac,*fron;
};
node *first=NULL,*temp=NULL,*last=NULL;
void insertion(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->bac=NULL;
    ptr->fron=NULL;
    last=ptr;
    if(first==NULL)
    {
        first=ptr;
        temp=ptr;
    }
    else
    {
        temp->fron=ptr;
        ptr->bac=temp;
        temp=ptr;
    }
}
void traverse()
{
    node *str;
    for(str=first; str!=NULL;)
    {
        cout<<str->info<<" ";
        str=str->fron;
    }
}
//void revers(int n)
//{
//    int f;
//    node *str=first,*temp,*t,*p;
//
//    for(int i=0; i<n-1; i++)
//    {
//        temp=str;
//        for(int j=i; j<n-1; j++,temp=temp->fron )
//        {
//            f=temp->info;
//            t=temp->fron;
//            temp->info=t->info;
//            t->info=f;
//        }
//    }
//
//}
void rever(int n)
{
	node *str,*f;
	int temp;
	str=first;
	f=last;
	for (int i=0;i<n/2;i++){
		temp=str->info;
		str->info=f->info;
		f->info=temp;
		str=str->fron;
		f=f->bac;
	}
}
int main()
{
    cout << "Enter the element :" ;
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        insertion(data);
    }
  //  revers(n);
    rever(n);
    traverse();
    return 0;
}
