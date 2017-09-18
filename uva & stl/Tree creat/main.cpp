#include <iostream>

using namespace std;
class  tnode
{
public:
    char ch;
    tnode *left,*right,*next;
};
typedef tnode *t_node;
t_node root,top;

void push(t_node ptr)
{
    t_node p;
    if(top==NULL) top=ptr;
    else
    {
        for(p=top; p->next!=NULL; p=p->next);
        p->next=ptr;
    }
}
t_node get()
{
	t_node p;
	if(top==NULL){
		cout<<"tree is empty"<<endl;
		return top;
	}
	p=top;
	top=top->next;
	return p;
}
void make_tree()
{
	t_node p,dat;
	cout<<"Enter the root of the tree:";
	char c;
	cin>>c;
	p=new tnode;
	p->ch=c;
	p->left=NULL;
	p->next=NULL;
	p->right=NULL;
	if(root==NULL) root =p;
	push(p);
	while(top!=NULL){
			char aa;
	dat=get();
		cout<<"Enter the left child of"<<dat->ch<<":";
		cin>>aa;
		if(aa!='0'){
		p=new tnode;
		p->left=NULL;
		p->next=NULL;
		p->right=NULL;
		p->ch=aa;
		dat->left=p;
		push(p);
	}
		cout<<"Enter the right child of"<<dat->ch<<":";
		cin>>aa;
		if(aa!='0'){
		p=new tnode;
		p->left=NULL;
		p->next=NULL;
		p->right=NULL;
		p->ch=aa;
		dat->left=p;
		push(p);
		}
}
}
t_node empty()
{
    return top;
}

void push_s(t_node pt)
{
    t_node p;
    pt->next=top;
    top=pt;
}
t_node pop()
{
    t_node pt,pev;
    if(top==NULL)
        return top;
    else
    {
        pt=top;
        top=top->next;
    }
    return pt;
}



void preorder_t()
{

    cout<<"After preorder traverse"<<endl<<endl;
    t_node ptr;
    ptr=root;
    while(ptr!=NULL)

    {
        cout<<"   "<<ptr->ch;
        if(ptr->right!=NULL)
            push_s(ptr->right);

        if(ptr->left!=NULL)
            ptr=ptr->left;
        else
            ptr=pop();

    }

}
int main()
{
    cout << "traverse with preorder" << endl;
    make_tree();
    preorder_t();
    return 0;
}
