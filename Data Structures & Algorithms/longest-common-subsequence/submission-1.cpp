class Solution {
public:
    
    int solve(string s1, string s2, vector<vector<int>>& memo, int x, int y){
        if(x < 0 || y <  0){
            return 0;
        }


        if(memo[x][y] != -1){
            return memo[x][y];
        }
        if(s1[x] == s2[y]){
            return memo[x][y] = 1 + solve(s1,s2, memo, x-1, y-1);
        }else{
            return memo[x][y] = max(solve(s1,s2,memo,x-1,y), solve(s1,s2,memo, x, y-1));
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n  = text2.size();

        vector<vector<int>> memo(m, vector<int>(n, -1));


        return solve(text1, text2,memo, m-1,n-1);
        



    }
};
