class Solution {
public:
    vector<int> memo;

    int dfs(vector<int>& nums, int i){

        if(i < 0){
            return 0;
        }

        if(i>=nums.size()){
            return 0;
        }
        if(memo[i]!=-1){
            return memo[i];
        }
        memo[i] = max(dfs(nums, i-1), dfs(nums, i-2)+nums[i]);

        return memo[i];

    }

    int rob(vector<int>& nums) {
        memo.resize(nums.size(),-1);
        return dfs(nums, nums.size()-1);

    }
};
