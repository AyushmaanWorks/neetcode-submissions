class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> seen;
    

        for(auto i: nums){
            seen[i] ++; 
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;
        
        for(auto i: seen){
            minHeap.push({i.second, i.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        vector<int> result;
        for(int i = k-1; i>=0; i-- ){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};
