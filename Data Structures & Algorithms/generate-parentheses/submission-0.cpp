class Solution {
public:

    void backtrack(int open, int close, vector<string>& ans, string curr){
        if(open == 0 && close == 0){
            ans.push_back(curr);
            return;
        }

        if(open > 0){
            curr.push_back('(');
            backtrack(open - 1, close, ans, curr);
            curr.pop_back();
        }

        if(close > open){
            curr.push_back(')');
            backtrack(open, close-1, ans, curr);
            curr.pop_back();
        }


    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;

        backtrack(n, n, ans, curr);
        return ans;
    }
};
