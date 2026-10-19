class Solution {
public:

    int solve(vector<int>& coins, int amount, vector<int>& dp){
        //base case
        if(amount < 0){
            return INT_MAX;
        }

        if(amount == 0){
            return 0;
        }

        //check exists

        if(dp[amount] != -1){
            return dp[amount];
        }

        //calculate and update
        int mini = INT_MAX;
        for(int coin: coins){
            int numcoins = solve(coins, amount - coin, dp);
            if (numcoins != INT_MAX) {
                mini = min(mini, 1 + numcoins);
            }
        }

        return dp[amount] = mini;

    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, -1); //stores min coins for each amount
        int ans = solve(coins, amount, dp);
        return (ans==INT_MAX)? -1: ans;
    }
};
