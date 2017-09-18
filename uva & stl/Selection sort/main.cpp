#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void selectionsort(int a[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<endl;
        display(a,n);

    }
}
int main()
{
    const int size=5;
    int number[size];
    /*For accessing random number automatically*/
    srand(unsigned(time(0)));
    for(int i=0; i<size; i++)
    {
        number[i]=(rand()%100)+1;
        cout<<number[i]<<" ";
    }
    cout<<endl;
    cout<<"Sort:"<<endl;
    selectionsort(number,size);

   // display(number,size);
    return 0;
}
