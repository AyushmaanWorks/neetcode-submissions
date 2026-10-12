class Solution {
public:

    void dfs(int index, int target, vector<int>& cur, vector<int>& nums, vector<vector<int>>& ans){

        if(target == 0){
            ans.push_back(cur);
            return;
        }

        if(index == nums.size()){
            return;
        }



        if(nums[index] <= target){
            cur.push_back(nums[index]);
            dfs(index, target-nums[index], cur, nums,ans);
            cur.pop_back();
        }

        dfs(index+1, target, cur, nums, ans);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> cur;

        dfs(0, target, cur, nums, ans);
        return ans;
    }
};
