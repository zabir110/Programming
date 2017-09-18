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
void insertionsort(int a[],int n)
{
    int j, temp;
    for(int i=1; i<n; i++)
    {
    	j=i;
     while(j>0 && a[j-1]>a[j]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                j--;
        }
        cout<<endl;
        display(a,n);
    }

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
    insertionsort(number,size);

  //  display(number,size);
    return 0;
}
