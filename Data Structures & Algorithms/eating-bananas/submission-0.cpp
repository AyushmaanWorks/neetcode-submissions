class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int mid;

        while(left<=right){

            mid =  left + (right - left)/2;

            long long hours = 0;

            for(auto pile: piles){
                hours += ((pile+mid-1)/mid);
            }

            if(hours<=h){
                right = mid - 1;
            }else{
                left = mid +1;
            }

        }

        return left;
    }
};
