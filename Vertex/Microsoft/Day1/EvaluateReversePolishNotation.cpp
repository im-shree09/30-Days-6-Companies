class Solution {
public:
    int evalRPN(vector<string>& tok) {
        int n=tok.size();
        stack<int>st;

        for(int i=0;i<n;i++)
        {
            if(tok[i]=="+"||tok[i]=="*"||tok[i]=="-"||tok[i]=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();

                if(tok[i]=="+")st.push(a+b);
                else if(tok[i]=="-")st.push(b-a);
                else if(tok[i]=="/")st.push(b/a);
                else st.push(a*b);
            }
            else
            {
                st.push(stoi(tok[i]));
            }
        }
        return st.top();
    }
};