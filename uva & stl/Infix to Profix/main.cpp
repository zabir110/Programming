#include <iostream>
#define size_max 100
using namespace std;
int i=-1;
class stac_k
{
    char data[size_max];
public:
    int length=0 ;
    void push(int a)
    {
        data[++i]=a;
    }
    void pop()
    {
        --i;
    }
    char top()
    {
        return data[i];
    }
    bool Is_empty()
    {
        if(i==-1) return true;
         return false;
    }
};

bool isoperand(char a)
{
    if(a >='0' && a<='9') return true;
    if(a >= 'a' && a <= 'z') return true;
    if(a >= 'A' && a <= 'Z') return true;
    return false ;
}
bool isoperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return true;
    return false;
}

int GetOperatorWeight(char op)
{
    int weight = -1;
    switch(op)
    {
    case '+':
    case '-':
        weight = 1;
    case '*':
    case '/':
        weight = 2;
    case '^':
        weight = 3;
    }
    return weight;
}
bool has_higher_presidence(char op1,char op2)
{
    {
        int op1Weight = GetOperatorWeight(op1);
        int op2Weight = GetOperatorWeight(op2);


        return op1Weight > op2Weight ?  true: false;
    }
}
void infix_to_postfix(string exp)
{
    stac_k s;
    string postfix;
    s.push('(');
    exp+=')';
    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i]==','||exp[i]==' ') continue;

     else   if(isoperator(exp[i]))
        {
            while(!s.Is_empty() &&  s.top()!='(' &&  has_higher_presidence(s.top(),exp[i]))
            {
                postfix+=s.top();
                s.pop();
            }
            s.push(exp[i]);
        }


        else if(isoperand(exp[i]))
        {
            postfix+=exp[i];
        }

        else if(exp[i]=='(') s.push(exp[i]);
        else if(exp[i]==')')
        {
            while(!s.Is_empty()&& s.top()!='(')
            {
                postfix+=s.top();
                s.pop();
            }
            s.pop();
        }
    }
    cout<< postfix;

}
int main()
{
    string expression;
    cout<<"Enter the infix expression:";
    getline(cin,expression);
    infix_to_postfix(expression);
    return 0;
}
