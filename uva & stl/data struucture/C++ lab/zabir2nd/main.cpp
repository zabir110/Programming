#include <iostream>

using namespace std;
class box
{
public:
    float l1,l2,l3,area ;
};
int main()
{
    box p[100] ;
    int i,n;
    cout<<"HOw many object:";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<i+1<<"st length:";
        cin>>p[i].l1>>p[i].l2>>p[i].l3;
    }

    for(i=0; i<n; i++)
        p[i].area=p[i].l1*p[i].l2*p[i].l3;

    for(i=0; i<n; i++)
        cout<<i+1<<"st volume"<< p[i].area<<"\n";
    return 0;
}
