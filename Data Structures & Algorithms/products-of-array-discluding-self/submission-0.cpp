class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix = {1};
        vector<int> suffix = {1};


        for(int i = 1; i<= nums.size() - 1; i++){
            prefix.push_back(prefix.back()*nums[i-1]);
        }

        for(int i = nums.size() - 2; i>= 0; i--){
            suffix.push_back(suffix.back()*nums[i+1]);
        }

        vector<int> res;

        for(int i = 0; i<=nums.size()-1; i++){
            res.push_back(suffix[nums.size()-1-i]*prefix[i]);
        }

        return res;
    }
};
