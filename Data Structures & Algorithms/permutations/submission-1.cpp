class Solution {
public:

    vector<vector<int>> res;
    vector<int> cur;

    void backtrack(vector<int>& nums, vector<int>& cur, vector<bool>& visited){
        if(cur.size() == nums.size()){
            res.push_back(cur);
            return;
        }

        for(int index = 0; index < nums.size(); index++){
            if(visited[index] == false){

                //include
                cur.push_back(nums[index]);
                visited[index] = true;

                //backtrack
                backtrack(nums, cur, visited);

                //exclude
                cur.pop_back();
                visited[index] = false;
            }
    


        }


    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur;
        vector<bool> visited(nums.size(), false);
        backtrack(nums, cur, visited);
        return res;
    }
};
