#include <iostream>
#include <string>
#define maximum 100
using namespace std;

class stack
{
    int a[maximum]={0};
    int Top=-1;
public:
    void push(int c)
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
}s;

bool isoperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return true;
    return false;
}
bool isnumdigit(char c)
{
    if(c>='0'&& c<='9') return true;
    return false;
}
int perform(char c,int a,int b)
{
    if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else if(c=='*') return a*b;
    else if(c=='/') return a/b;
    else if(c=='^') return a^b;
    else return 0;
}

int evaluate_prefix(string exp)
{

    for(int i=exp.length()-1; i>=0; i--)
    {

        if(exp[i]==' '|| exp[i]==',') continue;
        else if(isoperator(exp[i]))
        {
            int op1=s.top();s.pop();
            int op2=s.top();s.pop();

            int ans=(perform(exp[i],op1,op2));

            s.push(ans);
        }
        else if(isnumdigit(exp[i]))
        {
            int operand=0,j=1;
            while(i>=0 && (isnumdigit(exp[i])))
            {

                operand=((exp[i])-'0')*j + operand;
                j*=10;
                i--;
            }
            i++;
            s.push(operand);
        }
    }
    return s.top();
}

int main()
{
    string exp;
    getline(cin,exp);
    cout<<evaluate_prefix(exp)<<endl;
    return 0;
}
