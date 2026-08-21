class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;

        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] ++;
        }

        for(auto& [a,b]: hash){
            mh.push({b, a});
            if(mh.size() > k) mh.pop();

        }

        vector<int> ans;

        for(int i  = 0; i<k; i++){
            ans.push_back(mh.top().second);
            mh.pop();
        }

        return ans;
        
    }
};
