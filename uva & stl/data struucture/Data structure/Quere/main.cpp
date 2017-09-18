#include <iostream>

using namespace std;

int main()
{

    int n,choose,i;
    int ara[10];
    cout<<"Enter the number of element:";
    cin>>n;
    cout<<"Ok start: ";
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    while(choose!=0)
    {
        cout<<"\nPress 1 for push\nPress 2 for pop\nPress 0 for Exit:\nChoose:";
        cin>>choose;
        if(choose==1)
        {
            n=n+1;
            cout<<"Enter the new element:";
            cin>>ara[n-1];
            for(i=0; i<n; i++)
            {
                cout<<" "<<ara[i];
            }
        }
        else
        {
            for(i=0; i<n-1; i++)
            {
                ara[i]=ara[i+1];
            }
            n=n-1;
            for(i=0;i<n;i++){
				cout<<ara[i]<<" ";
            }

        }
    }

    return 0;
}
/*
 Sample input :4
		1 2 3 4
		choose=1
		new element:5
	Sample Output:
		1 2 3 4 5
	Sample Input:
		choose=2
	Samle output 2 3 4 5
*/
