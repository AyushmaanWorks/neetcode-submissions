class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows*cols -1;
        

        while(left<=right){
            int mid = (left+right) / 2;
            int midr = mid / cols;
            int midc = mid % cols;

            if(target  ==  matrix[midr][midc]){
                return true;
            }else if(target < matrix[midr][midc]){
                right = mid - 1;
            }else{
                left = mid+1;
            }


        }


        return false;




    }
};
