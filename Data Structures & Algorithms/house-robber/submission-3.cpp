class Solution {
public:
    int solve(vector<int>& nums, vector<int>& dp, int idx){

        //out of bound
        if(idx < 0){
            return 0;
        }

        //base case
        if(idx == 0){
            return nums[idx];
        }

        //check if value exits

        if(dp[idx] != -1){
            return dp[idx];
        }

        //calculate dp[idx]

        return dp[idx] = max(
            nums[idx] + solve(nums, dp, idx-2),
            solve(nums, dp, idx-1));
    

    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(nums, dp, nums.size()-1);
    }
};
