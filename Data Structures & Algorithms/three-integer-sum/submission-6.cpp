class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int fixed = 0; fixed < nums.size()-2; fixed++){
            if(fixed > 0 && nums[fixed] == nums[fixed-1]){
                continue;
            }

            int left = fixed+1;
            int right = nums.size() - 1;

            while(left < right){
                int sum = nums[fixed] + nums[left] + nums[right];
                if(sum < 0){
                    left++;
                }else if(sum > 0){
                    right--;
                }else{
                    ans.push_back({nums[fixed], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left-1] )left++;
                    while(left < right && nums[right] == nums[right+1] )right--;
                }

                

                
            }
        }

        return ans;
    }
};
