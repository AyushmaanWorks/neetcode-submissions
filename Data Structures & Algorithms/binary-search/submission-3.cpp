class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while (left<=right){
             mid = (left+right)/2;

            if(target == nums[mid]){
                return mid;
            }
            if(nums[mid] > target){
                    right = mid-1;
            }else {
                    left = mid+1;
            }
        }

        return -1;

        
    }
};
