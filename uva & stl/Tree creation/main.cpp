#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
class bst
{
public:
    int info;
    bst *left,*right,*next;
};
bst *root=NULL,*top=NULL;
//stack<bst*>s;

void bst_creation(int data)
{
    bst *ptr;
    ptr=new bst();
    ptr->info=data;
    ptr->left=NULL;
    ptr->next=NULL;
    ptr->right=NULL;
    if(root==NULL)
    {
        root=ptr;
    }
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

/*Push & Pop function work as stack*/
void push(bst* srt)
{
    srt->next=top;
    top=srt;
}

bst* pop()
{
    bst* temp;
    if(top==NULL) return top;
    else
    {
        temp=top;
        top=top->next;
        return temp;
    }
}

//Manualy preorder traversing
void preorder()
{
    bst* p;
    p=root;
//    s.push(NULL);
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        if(p->right!=NULL)
        {
            push(p->right);
        }
        if(p->left!=NULL)
        {
            p=p->left;
        }
        else
        {
            p=pop();
            //      s.pop();
        }
    }

}
//Manualy inorder traversing
void inorder()
{
    bst *p;
    p=root;
A:
    while(p!=NULL)
    {
        push(p);
        p=p->left;
    }
    /*ai pop diye last left pai*/
    p=pop();
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        if(p->right!=NULL)
        {
            p=p->right;
            goto A;
        }
        /*ai pop diye left ar pore koi jabo ta pai*/
        p=pop();
    }
}

//Manualy postorder traversing
void postorder()
{
    bst *p;
    p=root;
    do
    {
        while(p!=NULL)
        {
            if(p->right!=NULL)
                push(p->right);
            push(p);
            p=p->left;
        }
        p=pop();
        if(p->right!=NULL && p->right==top)
        {
            top=top->next;
            push(p);
            p=p->right;
        }
        else
        {
            cout<<p->info<<" ";
            p=NULL;
        }
    }
    while(top!=NULL);
}

/*Recurrusive process preorder*/
int preorder_recursive(bst  *node)
{
	if(node==NULL)
		return 0;
	cout<<node->info<<" ";
	preorder_recursive(node->left);
	preorder_recursive(node->right);
}

/*Recurrusive process inorder*/
int inorder_recursive(bst  *node)
{
	if(node==NULL)
		return 0;
	inorder_recursive(node->left);
	cout<<node->info<<" ";
	inorder_recursive(node->right);
}
/*Recurrusive process postorder*/
int postorder_recursive(bst  *node)
{
	if(node==NULL)
		return 0;
	postorder_recursive(node->left);
	postorder_recursive(node->right);
	cout<<node->info<<" ";
}
int main()
{
    int item;
    cout<<"Enter the item && press 0 for exit: "<<endl;
    while(1)
    {
        cin>>item;
        if(item==0) break;
        else
            bst_creation(item);
    }
    cout<<"Preorder:";
 //   preorder();
    preorder_recursive(root);
    cout<<endl;
    cout<<"Inorder:";
  //  inorder();
     inorder_recursive(root);
    cout<<endl;
    cout<<"Postorder:";
    //postorder();
    postorder_recursive(root);
    return 0;
}
