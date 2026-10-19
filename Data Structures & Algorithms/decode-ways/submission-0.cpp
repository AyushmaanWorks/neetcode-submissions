class Solution {
public:

    int solve(string s, int idx, vector<int>& dp){
        //out of bounds
        if(idx < 0){
            return 1;
        }

        //check if exists

        if(dp[idx] != -1){
            return dp[idx];
        }

        //calculate and update
        int ways = 0;

        //single digit
        if(s[idx] != '0'){
            ways += solve(s, idx-1, dp);
        }

        if(idx > 0){
            int num = (s[idx-1] - '0')*10 + s[idx]-'0';

            if(num >=10 && num <= 26){
                ways += solve(s, idx-2, dp);
            }
        }

        return dp[idx] = ways;
    }

    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
        return solve(s, s.size()-1, dp);
    }
};
