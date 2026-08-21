class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;

        for(int i = 0; i< nums.size(); i++){
            if(hash[nums[i]]){
                return true;
            }else{
                hash[nums[i]]++;
            }

        } 
        return false;

    }
};