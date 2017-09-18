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
void quicksort(int a[],int left,int right)
{
    int i=left;
    int j=right;
    int temp;
    int middle=(left+right)/2;
    while(i<=j)
    {
        while(a[i]<a[middle])	i++;
        while(a[j]>a[middle]) j--;
        if(i<=j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    if(left<j) quicksort(a,left,j);
    if(i<right) quicksort(a,i,right);
}
int main()
{
    const int size=10;
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
    quicksort(number,0,size-1);

    display(number,size);
    return 0;
}
