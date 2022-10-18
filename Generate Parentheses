class Solution {
public:  
    vector<string> generateParenthesis(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string> ansv;
        int op = 1, cl = 0;
        string ans = "(";
        recp(op,cl,n,ans,ansv);
        return ansv;
    }
    
    void recp(int op, int cl, int &n, string &ans, vector<string> &ansv){
        if (ans.length() == 2*n){
            ansv.push_back(ans);
        }
        if(op<n){
            ans.push_back('(');
            recp(op+1,cl,n,ans,ansv);
            ans.pop_back();
        }
        if(cl<op){
            ans.push_back(')');
            recp(op,cl+1,n,ans,ansv);
            ans.pop_back();
        }
    }
};
