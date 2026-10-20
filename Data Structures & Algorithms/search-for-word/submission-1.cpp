class Solution {
public:

    bool dfs(int idx, string& word, vector<vector<char>>& board, int x, int y, vector<vector<int>>& seenpath){

        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || seenpath[x][y] !=-1){
            return false;
        }
        bool found = false;
        //base case
        if(board[x][y] == word[idx]){
            if(idx == word.size() - 1){
                return true;
            }else{
                seenpath[x][y] = 1;
                found = dfs(idx+1, word, board, x+1, y, seenpath) ||
                             dfs(idx+1, word, board, x-1, y, seenpath) ||
                             dfs(idx+1, word, board, x, y+1, seenpath) ||
                             dfs(idx+1, word, board, x, y-1, seenpath);
            }
        }

        seenpath[x][y] = -1;


        return found;


    }


    bool exist(vector<vector<char>>& board, string word) {
        int r  = board.size();
        int c = board[0].size();
        vector<vector<int>> visited(r, vector<int>(c, -1));

        bool flag = false;

        for(int i = 0; i < r; i ++){
            for(int j = 0; j < c; j++){
                if(flag == true){
                    return flag;
                }else{
                    if(word[0] == board[i][j]){
                        flag = dfs(0, word, board, i, j, visited);
                    }
                }
                
            }
        }


        return flag;

    }
};
