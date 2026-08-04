class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto l = numbers.begin();
        auto r = numbers.end() - 1;
        

        while(l<r){
            if(*l + *r == target){
               return {(int)(l - numbers.begin() + 1), (int)(r - numbers.begin() + 1)};
            }
            if(target - *l < *r){
                r--;
            }else{
                l++;
            }
        }
        return {(int)(l - numbers.begin() + 1), (int)(r - numbers.begin() + 1)};
    }   
};
