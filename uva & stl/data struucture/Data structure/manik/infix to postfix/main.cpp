#include <iostream>
#include <string>
#define maximum 100

using namespace std;

class stack
{
    int a[maximum];
    int Top=-1;
public:
    void push(char c)
    {
        if(Top==maximum) cout<<"Overflow"<<endl;
        else
        {
            a[++Top]=c;
        }
    }
    void pop()
    {
        if(Top==-1) cout<<"Underflow"<<endl;
        else Top--;
    }
    int top()
    {
        return a[Top];
    }
    bool is_empty()
    {
        if(Top==-1) return true;
        else return false;
    }
};
stack s;
bool is_operator(char c);
bool is_operand(char c);
bool has_higher_pre(char a,char b);
int getweight(char c);
string infix_to_postfix(string exp)
{
    ///s.push('(');
    string postfix;
    for(unsigned i=0;i<exp.length();i++)
    {
        if(exp[i]==' ' || exp[i]==',') continue;
        else if(is_operator(exp[i]))
        {
            while(!s.is_empty()&&s.top()!='('&& has_higher_pre(s.top(),exp[i]))
            {
                postfix+=s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
        else if(is_operand(exp[i]))
        {
            postfix+=exp[i];
        }
        else if(exp[i]=='(')
        {
            s.push(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(!s.is_empty()&&s.top()!='(')
            {
                postfix+=s.top();
                s.pop();
            }
            s.pop();
        }
    }
    while(!s.is_empty())
    {
        postfix+=s.top();
        s.pop();
    }
    //s.push(')');
    return postfix;
}

bool is_operator(char c)
{
    if(c=='+' ||c=='-'||c=='*'||c=='/' || c=='^') return true;
    return false;
}

bool is_operand(char c)
{
    if(c>='0'&&c<='9') return true;
    else if(c>='a' && c<='z') return true;
    else if(c>='A'&&c<='Z') return true;
    return false;
}

bool has_higher_pre(char a,char b)
{
    int aweight=getweight(a);
    int bweight=getweight(b);
    if(aweight>=bweight) return true;
    return false;
}
int getweight(char c)
{
    int w=-1;
    switch(c)
    {
    case '+':
    case '-':
        w=1;
        break;
    case '*':
    case '/':
        w=2;
        break;
    case '^':
        w=3;
        break;
    }
    return w;
}

int main()
{
    string exp;
    cout<<"Enter the Infix expression "<<endl;
    getline(cin,exp);
    cout<<infix_to_postfix(exp)<<endl;
    return 0;
}
