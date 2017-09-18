#include <iostream>

using namespace std;

class bst
{
public:
    int info;
    bst *left,*right,*next;
};
bst *root=NULL,*top=NULL;

void bst_creation(int data)
{
    bst *ptr=new bst();
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->next=NULL;
    ptr->info=data;
    if(root==NULL) root=ptr;
    else
    {
        bst *srt;
        for(srt=root;;)
        {
            if(ptr->info<=srt->info)
            {
                if(srt->left==NULL)
                {
                    srt->left=ptr;
                    break;
                }
                else
                    srt=srt->left;
            }
            else
            {
                if(srt->right==NULL)
                {
                    srt->right=ptr;
                    break;
                }
                else
                    srt=srt->right;
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

void preorder()
{
    bst *ptr;
    ptr=root;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<endl;
        if(ptr->right!=NULL) push_s(ptr->right);
        if(ptr->left!=NULL)
        {
            ptr=ptr->left;
        }
        else
            ptr=pop_s();
    }
}

void inorder()
{
    bst *p;
    p=root;
a:
    while(p!=NULL)
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

void postorder()
{
    bst *p=root;
    do
    {
        while(p!=NULL)
        {
            if(p->right!=NULL)
            {
                push_s(p->right);
            }
            push_s(p);
            p=p->left;
        }
        p=pop_s();
        if(p->right!=NULL && top==p->right)
        {
            top=top->next;
            push_s(p);s
            p=p->right;
        }
        else
        {
            cout<<p->info<<endl;
            p=NULL;
        }
    }
    while(top!=NULL);
}

int main()
{
    int item;
    while(1)
    {
        cin>>item;
        if(item==0) break;
        else
            bst_creation(item);
    }
    int c;
    cout<<"Chose the travarsing order"<<endl;
    cin>>c;
    if(c==1) preorder();
    else if(c==2) inorder();
    else if(c==3) postorder();

    return 0;
}
