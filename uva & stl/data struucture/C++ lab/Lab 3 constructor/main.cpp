#include <iostream>

using namespace std;

class com
{
public :
    char aa;
    int bb;
    double cc,dd;
    com(char,int,double);

};

com :: com (char a,int b=0,double c=0.0)
{
    aa=a;
    bb=b;
    cc=c;
    cout << aa << " " << bb << " " << cc << endl;
}

int main()
{
    com s('A',2,3.3);

    com s1('B',3);
    //s(2,3.3,2.2);
    //s(3);
    //s('D',3.3);
    return 0;
}
