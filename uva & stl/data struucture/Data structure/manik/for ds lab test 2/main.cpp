#include <iostream>

using namespace std;

class tr
{
public:
    char ch;
    tr *left,*right,*next;
};
tr *top=NULL,*root=NULL;
void push(tr *srt)
{
    if(top==NULL) top=srt;
    else
    {
        tr *p;
        for(p=top; p->next!=NULL; p=p->next);
        p->next=srt;
    }
}
tr* get()
{
    if(top==NULL) return NULL;
    tr *p;
    p=top;
    top=top->next;
    return p;
}

void treemake()
{
    tr *p,*dat;
    cout<<"Enter the root of the tree"<<endl;
    char c;
    cin>>c;
    c=toupper(c);
    if(c=='0')
    {
        cout<<"Empty"<<endl;
        return ;
    }
    else
    {
        p=new tr();
        p->left=NULL;
        p->right=NULL;
        p->next=NULL;
        p->ch=c;
        push(p);
        if(root==NULL) root=p;
        while(top!=NULL)
        {
            char aa;
            dat=get();
            cout<<"Enter the left of "<<dat->ch<<endl;
            cin>>aa;
            if(aa!='0')
            {
                aa=toupper(aa);
                p=new tr();
                p->left=NULL;
                p->right=NULL;
                p->next=NULL;
                p->ch=aa;
                push(p);
                dat->left=p;
            }
            cout<<"Enter right of "<<dat->ch<<endl;
            cin>>aa;
            if(aa!='0')
            {
                aa=toupper(aa);
                p=new tr();
                p->left=NULL;
                p->right=NULL;
                p->next=NULL;
                p->ch=aa;
                push(p);
                dat->right=p;
            }
        }
    }
}
void push_s(tr *srt)
{
    srt->next=top;
    top=srt;
}
tr* pop()
{
    tr *p;
    if(top==NULL) return top;
    p=top;
    top=top->next;
    return p;
}

void pretra()
{
    tr *ptr;
    ptr=root;
    while(ptr!=NULL)
    {
        cout<<ptr->ch<<endl;
        if(ptr->right!=NULL) push_s(ptr->right);
        if(ptr->left!=NULL) ptr=ptr->left;
        else
            ptr=pop();
    }
}

int main()
{
    treemake();
    pretra();
    return 0;
}
