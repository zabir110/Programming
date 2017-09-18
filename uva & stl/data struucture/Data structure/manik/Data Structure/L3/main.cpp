#include <iostream>

using namespace std;

class node
{
public :
    int info;
    node *link;
};

node *head = NULL;
node *tmp;

void insrt(int data)
{
    node *ptr;
    ptr = new node();
    ptr -> info = data;
    ptr -> link = NULL;

    if(head == NULL)
    {
        head = ptr;
        tmp = ptr;
    }
    else
    {
        tmp -> link = ptr;
        tmp = ptr;
    }
}

void tvrs()
{
    node *srt;
    srt = head;
    cout << "Printing the elements :" <<endl;
    while(srt!=NULL)
    {
        cout << srt -> info << endl;
        srt = srt -> link;
    }
}

void insrt_first(int data)
{
    node *ptr;
    ptr = new node();
    ptr -> info = data;
    ptr -> link = head;
    head = ptr;
}

void insrt_last(int data)
{
    node *srt;
    node *ptr;
    ptr = new node();
    ptr -> info = data;
    ptr -> link = NULL;
    srt = head;
    while(1)
    {
        if(srt->link==NULL)
        {
            srt->link = ptr;
            break;
        }
        else
            srt= srt->link;

    }
}

int main()
{
    int n,item;
    cout << "Enter the item size :" << endl;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> item;
        insrt(item);
    }
    cout << "Enter item to add first" << endl;
    cin >> item;
    insrt_first(item);
    tvrs();

    cout << "Enter item to add last " << endl;
    cin >> item;
    insrt_last(item);
    tvrs();

    return 0;
}

/*Sample Input : 4
Sample Output: 1 3 5 7
               (Enter item to add first): 8
               8 1 3 5 7
               (Enter item to add last):
               6
               8 1 3 5 7 6*/
