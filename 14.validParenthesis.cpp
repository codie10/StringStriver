
#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string s)
{
    int n=s.length();
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())return false;
            char ch=st.top();
            if(s[i]==')'&& ch=='('|| s[i]=='}'&& ch=='{' || s[i]==']' && ch=='[')
            {
              st.pop();
              continue;
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string str="{[{()}]}";
    if (isValidParenthesis(str))
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
