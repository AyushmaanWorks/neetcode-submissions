class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        seen.insert({0,1});
        int cumsum = 0;
        int ways = 0;
        for(int i = 0; i < nums.size(); i++){
            cumsum += nums[i];
            int required = cumsum - k;
            if(seen.contains(required)){
                ways+=seen[required];
            }

            if(seen.contains(cumsum)){
                seen[cumsum]++;
            }else{
                seen.insert({cumsum,1});
            }
        }

        return ways;
    }
};