bool check(char a,char b)
{
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}

bool isValidParenthesis(string s)
{
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            st.push(s[i]);
        else
        {
            if(st.empty())
                return false;
            else if(check(st.top(),s[i]))
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}