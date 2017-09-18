#include <iostream>

using namespace std;

class bst
{
public:
    int info;
    bst *left,*right,*next;
};
bst *top=NULL,*root=NULL;

void bst_creation(int data)
{
    bst *ptr=new bst();
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->next=NULL;
    if(root==NULL)
    {
        root=ptr;
    }
    else
    {
        bst *srt;
        for(srt=root;;)
        {
            if(srt->info>=ptr->info)
            {
                if(srt->left==NULL)
                {
                    srt->left=ptr;
                    break;
                }
                else srt=srt->left;
            }
            else
            {
                if(srt->right==NULL)
                {
                    srt->right=ptr;
                    break;
                }
                else srt=srt->right;
            }
        }
    }
}
void push_s(bst *srt)
{
    srt->next=top;
    top=srt;
}

bst* pop_s()
{
    bst *pt;
    if(top==NULL) return top;
    else
    {
        pt=top;
        top=top->next;
    }
    return pt;
}

void pre_tra()
{
    bst *p=root;
    a:while(p!=NULL)
    {
        push_s(p);
        p=p->left;
    }
    p=pop_s();
    while(p!=NULL)
    {
        cout<<p->info<<endl;
        if(p->right!=NULL)
        {
            p=p->right;
            goto a;
        }
        p=pop_s();
    }
}


int main()
{
    int item;
    cout<<"Enter the items "<<endl;
    while(1)
    {
        cin>>item;
        if(item==0) break;
        else
        {
            bst_creation(item);
        }
    }

    cout<<"Now travesting "<<endl;
    pre_tra();

    return 0;
}
