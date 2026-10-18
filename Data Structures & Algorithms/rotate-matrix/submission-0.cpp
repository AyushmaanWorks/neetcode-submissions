class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size()-1;
        int c = matrix[0].size()-1;
        //transpose
        for(int i = 0; i <= r; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse rows
        for(int i = 0; i <= r; i++){
            for(int j = 0; j <= c/2; j++){
                swap(matrix[i][j], matrix[i][c-j]);
            }
        }



        
    }
};
