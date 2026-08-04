class Solution {
public:

    vector<vector<int>> res;
    vector<int> curr;

    void backtrack(vector<int>& nums, int index, vector<int>& curr){

        if(index == nums.size()){
            res.push_back(curr);
            return;
        }

        //include a number

        curr.push_back(nums[index]);
        backtrack(nums, index+1, curr);

        curr.pop_back();

        //exclude a number
        backtrack(nums, index+1, curr);


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0;
        vector<int> curr = {};
        backtrack(nums, index, curr);
        return res;
    }
};
