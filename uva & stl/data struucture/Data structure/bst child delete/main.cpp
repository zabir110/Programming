#include <iostream>

using namespace std;

class bst
{
public:
    int info;
    bst *left,*right,*next;
};
bst *root=NULL,*top=NULL;

void bst_create(int data)
{
    bst *ptr=new bst();
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->next=NULL;
    if(root==NULL) root=ptr;
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
                else
                    srt= srt->left;
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
void deleting(int data)
{
    bst *srt,*ptr;
    for(srt=root;;)
    {
        if(data>srt->info)
        {
            ptr=srt;
            srt=srt->right;
        }
        else if(data<srt->info)
        {
            ptr=srt;
            srt=srt->left;
        }
        else
        {
            if(srt->right==NULL && srt->left==NULL)
            {
                if(srt->info<=ptr->info)
                {
                    ptr->left=NULL;
                    break;
                }
                else
                {
                    ptr->right=NULL;
                    break;
                }
            }
            else if(srt->left!=NULL && srt->right!=NULL)
            {
                cout<<"Sorry, the node has two child and there is no code to delete it"<<endl;
                break;
            }
            else if(srt->right!=NULL || srt->left!=NULL)
            {
                if(srt->info<=ptr->info)
                {
                    if(srt->left!=NULL)
                    {
                        ptr->left=srt->left;
                        break;
                    }
                    else if(srt->right!=NULL)
                    {
                        ptr->left=srt->right;
                        break;
                    }
                }
                else
                {
                    if(srt->left!=NULL)
                    {
                        ptr->right=srt->left;
                        break;
                    }
                    else if(srt->right!=NULL)
                    {
                        ptr->right=srt->right;
                        break;
                    }
                }
            }
        }
        if(srt->left==NULL && srt->right==NULL && srt->info !=data)
        {
            cout<<"The item is not in the tree"<<endl;
            break;
        }
    }
}

void inorder(bst *srt)
{
    if(srt==NULL) return;
    else
    {
        inorder(srt->left);
        cout<<srt->info<<endl;
        inorder(srt->right);
    }
}

int main()
{
    int item;
a:
    cout<<"Enter the items or enter 0 to end the insertion"<<endl;
    while(1)
    {
        cin>>item;
        if(item==0) break;
        else
        {
            bst_create(item);
        }
    }
    cout<<"Element in the tree in inorder travers"<<endl;
    inorder(root);
    while(1)
    {
        int ck;
        cout<<"Press 1 for insertion and 2 for deletion and 0 for end "<<endl;
        cin>>ck;
        if(ck==0) break;
        if(ck==1) goto a;
        else if(ck==2)
        {
            cout<<"Enter the item to delete"<<endl;
            cin>>item;
            deleting(item);
            cout<<"Rest of the elements in the tree"<<endl;
            inorder(root);
        }
    }
    return 0;
}
