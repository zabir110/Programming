#include <iostream>

using namespace std;

class student
{
    int marks[1000];
    int calculate();
public:
    int  input();
    int roll[1000];
    int no,lr,sr,large,small;
};

int student::input()
{

    for(int i=0; i<no; i++)
    {
        cout<<"Roll: ";
        cin>>roll[i];
        cout<<"Marks:";
        cin>>marks[i];
    }
    calculate();

}

int student::calculate()
{

    large=marks[0];
    small=marks[0];
    int i;
    for( i=0; i<no; i++)
    {
        if(marks[i]>large)
        {
            large=marks[i];
            lr=i;
        }
    }


    for(i=0; i<no; i++)
    {
        if(marks[i]<small)
        {
            small=marks[i];
            sr=i;
        }
    }

}

int main()
{
    student obj[100];
    int m;
    cout<<"No of marks:";
    cin >>m;

    for(int i=0; i<m; i++)
    {
        cout<<"\nNumber of student:";
        cin>>obj[i].no;
        obj[i].input();
    }

    for(int i=0; i<m; i++)
    {
        cout<<"Roll:"<<obj[i].roll[obj[i].lr]<<" large:"<<obj[i].large<<" \nRoll:"<<obj[i].roll[obj[i].sr]<<" small:\n"<<obj[i].small;
        cout<<"\n";
    }
    return 0;
}
