#include <iostream>

using namespace std;
class student
{
    int variable1=6,variable2,variable3;
    char str1,str2;
public:
    student(int a,int b,char c);
    student(int a,char c,int b);
    student(int a,char b,char c);
    student(int a,char b);
    student(student&);
};
student::student(student& obj)
{

    cout<<variable1<<endl;
}
student::student(int a,int b,char c='-')
{
    if(c=='-')
    {
        variable2=a-b;
        cout<<variable2<<endl;
    }
    else
    {
        variable1=a+b;
        cout<<variable1<<endl;
    }
}
student::student(int a,char c ='-')
{
    if(c=='-')
    {
        variable3=-a;
        cout<<variable3<<endl;
    }
    else
    {
        str2=c-a;
        cout<<str2<<endl;
    }


}

student::student(int a,char b,char c)
{
    str1=b-a;
    cout<<str1<<endl;
}



int main()
{
    student obj(2,3,'+');
    student obj1(2,3);
    student obj2(2,'j');
    student obj5(2);
    student obj3(2,'d','-');
    student obj4(obj);
    return 0;
}
