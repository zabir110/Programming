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
void merge (int a[],int size,int low,int middle,int high)
{
	int temp[size];
	for(int i=low;i<=high;i++){
		temp[i]=a[i];
	}
	int i=low;
	int j=middle+1;
	int k=low;
	while(i<=middle&&j<=high){
		if(temp[i]<=temp[j]){
			a[k]=temp[i];
			++i;
		}
		else{
			a[k]=temp[j];
			++j;
		}
		k++;}
		while(i<=middle){
			a[k]=temp[i];
			i++;k++;
		}
	}

void mergesort(int a[],int size,int low ,int high)
{
	if(low<high){
		int middle=(low+high)/2;
	mergesort(a,size,low,middle);
	mergesort(a,size,middle+1,high);
	merge(a,size,low,middle,high);

	}
}
int main()
{
    const int size=30;
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
    mergesort(number,size,0,size-1);

    display(number,size);
    return 0;
}
