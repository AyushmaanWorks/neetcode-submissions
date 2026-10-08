class Solution {
public:

    void dfs(vector<int>& nums, int i, vector<vector<int>>& ans, vector<int> cur){
        if(i == nums.size()){
            ans.push_back(cur);
            return;
        }

        cur.push_back(nums[i]);
        dfs(nums, i+1, ans, cur);
        cur.pop_back();
        dfs(nums, i+1, ans, cur);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;

        dfs(nums, 0, ans,cur);
        return ans;
    }
};
