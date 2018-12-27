#include<bits/stdc++.h>
#include<stack>


using namespace std;

int main()
{
int n;
cin>>n;

while(n--)
{

int i;
    stack<int> stk;
    string s;
    cin>>s;

    int l=s.length();

    for(i=0;i<l;i++)
    {
        if(stk.empty())
        stk.push(s[i]);
        else if(stk.top()=='{' ||stk.top()=='['||stk.top()=='(')
        {
                if(stk.top()=='{' && s[i]=='}')
                stk.pop();
                else if(stk.top()=='[' && s[i]==']')
                stk.pop();
                else if(stk.top()=='(' && s[i]==')')
                stk.pop();
                else
                stk.push(s[i]);
        }
        else if(stk.top()=='}' ||stk.top()==']'||stk.top()==')')
        {
            stk.push(s[i]);
        }

    }
    if(stk.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}




}
