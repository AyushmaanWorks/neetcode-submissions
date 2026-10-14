class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> seen;
        for(int i: nums){
            if(seen.contains(i)){
                return true;
            }else{
                seen[i] = true;
            }
        }

        return false;
    }
};