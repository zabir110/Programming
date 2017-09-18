#include <iostream>
#define size_max 100
using namespace std;
int i=-1;
class stac
{
    int data[size_max];
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
    int  top()
    {
        return data[i];
    }
    bool Is_empty()
    {
        if(i==-1) return false;
        else return true;
    }
};


bool IsNumericDigit(char C)
{
    if(C >= '0' && C <= '9') return true;
    return false;
}


bool isoperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/') return true;
    return false;
}


int EvaluatePostfix(string expression);
int  PerformOperation(char c, int op1, int op2)
{
    if(c=='+') return op1+op2;
    else if(c=='-') return op1-op2;
    else if(c=='*') return op1*op2;
    else if (c=='/') return op1/op2;
}

int main()
{
    string exp;
    cout<<"Enter Postfix Expression \n";
    getline(cin,exp);
    int result = EvaluatePostfix(exp);
    cout<<"Output = "<<result<<"\n";
    return 0;
}



int EvaluatePostfix(string exp)
{
    stac s;
    s.length =exp.length();
    for(int i=s.length-1; i>=0; i--)
    {
        if(exp[i]==' '||exp[i]==',') continue;

        else if(isoperator(exp[i]))
        {
            int op1=s.top();
            s.pop();
            int  op2=s.top();
            s.pop();
            int result = PerformOperation(exp[i], op1, op2);
            s.push(result);
        }
        else if(IsNumericDigit(exp[i]))
        {
            int operand=0,last=1;
            while(i<exp.length()&&IsNumericDigit(exp[i]))
            {
                operand=operand+(exp[i]-'0')*last;
                i--;
                last*=10;
            }
            i++;
            s.push(operand);
        }
    }
    return s.top();
}
