class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> minheap;
        

        for(int i  = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }   

        for(auto [a,b]: mp){
            minheap.push({b,a});

            if(minheap.size() > k){
                minheap.pop();
            }
        }

        vector<int> mf;

        for(int i = 0; i < k; i++){
            auto [a,b] = minheap.top();
            minheap.pop();
            mf.push_back(b);
        }

        return mf;
    }
};
