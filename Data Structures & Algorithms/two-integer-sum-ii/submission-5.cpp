class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto l = numbers.begin();
        auto r = numbers.end() - 1;
        

        while(l<r){
            int cursum = *l + *r;
            if(cursum == target){
               return {(int)(l - numbers.begin() + 1), (int)(r - numbers.begin() + 1)};
            }
            else if(cursum>target){
                r--;
            }else{
                l++;
            }
        }
        return {(int)(l - numbers.begin() + 1), (int)(r - numbers.begin() + 1)};
    }   
};
