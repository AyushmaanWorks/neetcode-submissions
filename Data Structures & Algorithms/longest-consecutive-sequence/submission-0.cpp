class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength = 0;
        unordered_set<int> seen;

        for(int i: nums){
            seen.insert(i);
        }

        for(int i: seen){
            if(!seen.contains(i-1)){
                //start new seq
                int k = i;
                int curlen = 0;
                while(seen.contains(k)){
                    curlen++;
                    k++;
                }

                maxLength = max(maxLength, curlen);
            }
            
        }
        
        return maxLength;

    }
};
