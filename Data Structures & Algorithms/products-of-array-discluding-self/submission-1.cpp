class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //vectors containing suffix and prefix products
        vector<int> f;
        vector<int> b;
        vector<int> ans;
        //multiplilers accumulating the product
        int fm = 1;
        int bm = 1;

        for(int i = 0; i < nums.size(); i++){
            f.push_back(fm);
            fm*=nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--){
            b.push_back(bm);
            bm*=nums[i];
        }
        std::reverse(b.begin(), b.end());

        for(int i  = 0; i < nums.size(); i++){
            ans.push_back(f[i]*b[i]);
        }

        return ans;
    }
};
