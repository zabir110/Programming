#include <iostream>
#include<string.h>

using namespace std;
int ara[100],n=0;
void push(int x)
{
    ara[n]=x;
    n++;
}
void pop()
{
    n--;
}
int top()
{
    return ara[n-1];
}
bool Operator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
    {
        return true;
    }
    else
        return false;
}
int perform(char c,int op1,int op2)
{
   if(c=='+')
        return op1+op2;
   else if(c=='-')
        return op1-op2;
   else if(c=='*')
        return op1*op2;
   else
        return op1/op2;

}
bool Operand(char c)
{
    if(c>='0' && c<='9')
        return true;
    else
        return false;
}
int Eva_postfix(string exp)
{
    for(int i=0;i<exp.size();i++)
    {
        if(exp[i]==' '||exp[i]==',')
            continue;
        else if(Operator(exp[i]))
        {
            int op1,op2,res;
            op2=top();
            pop();
            op1=top();
            pop();
            res=perform(exp[i],op1,op2);
            push(res);
        }
        else if(Operand(exp[i]))
        {
            int opd=0;
            while(i<exp.size()&& Operand(exp[i]))
            {
                opd=(opd*10)+(exp[i]-'0');
                i++;
            }
            i--;
            push(opd);
        }
    }
    return top();
}


int main()
{
    string exp;
    int result;
    cout<<"Enter the expression: ";
    getline(cin,exp);
    result=Eva_postfix(exp);
    cout<<result;
    return 0;
}
