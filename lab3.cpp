// Write a program along with a clear algorithm to convert infix expression to prefix expression.
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool isOperatorOrNot(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'))
    {
        return true;
    }

    return false;
}
int precedence(char c)
{
    if (c == '^')

    {
        return 3;
    }

    else if (c == '/' || c == '*')
    {
        return 2;
    }

    else if (c == '+' || c == '-')
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

string asscoiativity(char c)
{
    if (c == '^')
    {
        return "RTL";
    }
    return "LTR";
}

char reverse(char c)
{
    if (c == '(')
    {

        return ')';
    }
    else if (c == ')')
    {

        return '(';
    }

    return c;
}

int main()
{
    string exp = "7+(2*4)-6*7+(5^3)/8*9+1";
    cout<<"The expression : "<<exp<<endl;
    stack<char> st;
    string postfix;
    string prefix;
    string expression;

    for (int i = exp.length(); i <= exp.length(); i--)
    {

        expression = expression + reverse(exp[i]);
    }

    for (int i = 0; i < exp.length(); i++)
    {
        exp = expression;
        if (isOperatorOrNot(exp[i]))
        {
            postfix = postfix + exp[i];
        }
        else if (exp[i] == '(')
        {
            st.push('(');
        }
        else if (exp[i] == ')')
        {
            while (st.top() != '(')
            {
                postfix = postfix + st.top();
                st.pop();
            }
            st.pop();
        }
        else

        {
            while (!st.empty() && precedence(exp[i]) < precedence(st.top()))
            {
                postfix = postfix + st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
    }

    while (!st.empty())
    {
        postfix = postfix + st.top();
        st.pop();
    }

    for (int i = postfix.length(); i <= postfix.length(); i--)
    {
        prefix = prefix + reverse(postfix[i]);
    }
    cout << "\n";
    cout << "string reverse:" << expression << endl;
    cout << "\n";
    cout << "Postfix expression is:" << postfix << endl;
    cout << "\n";
    cout << "Prefix operation is:" << prefix << endl;
    cout << "\n";
}