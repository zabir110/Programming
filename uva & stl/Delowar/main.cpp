#include <iostream>

using namespace std;

int main()
{
    int a[100];
    cout<<"Enter the no of array:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<endl;
      for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    return 0;
}
