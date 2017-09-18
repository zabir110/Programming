#include <iostream>

using namespace std;
class student
{
public:

    int roll,n;
    void input ();
    void calculate ();
    double display();
private:

    char name[10];
    double marks[10];
    double total=0;
    void totalmarks();
};



void student :: input()
{
    int i;
    cout<<"Roll:";
    cin>>roll;
    cout<<"Name:";
    cin>>name;
    for(i=0; i<n; i++)
    {
        cout<<i+1<<"st marks:";
        cin>>marks[i];

    }
}

void student:: calculate()
{
    totalmarks();
}


void student:: totalmarks()
{
    int i;
    for(i=0; i<n; i++)
    {
        total=total+marks[i];
    }
}

double student:: display()
{

    cout <<"roll:"<<roll<<" total:"<<total<<"\n";
}

int main()
{
    int n,m,i;
    student s1[10];
    cout <<"Enter the no of students:\n";
    cin>>m;
    for(i=0; i<m; i++)
    {
        cout <<"Enter the no of subjects:\n";
        cin>>s1[i].n;

    s1[i].input();
    s1[i].calculate();
    s1[i].display();}
    return 0;
}
