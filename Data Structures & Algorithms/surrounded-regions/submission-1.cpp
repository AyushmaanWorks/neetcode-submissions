class Solution {
public:


    void dfs(int x, int y, vector<vector<char>>& board ){
        if(x<0||y<0||x>=board.size()||y>=board[0].size()||board[x][y]!='O'){
            return;
        }
    
        board[x][y] = '#';

        dfs(x+1,y,board);
        dfs(x-1,y,board);
        dfs(x,y+1,board);
        dfs(x,y-1,board);
        
    }



    void solve(vector<vector<char>>& board) {
        


        for(int i = 0; i<board.size();i++){
            if(board[i][0] == 'O'){
                dfs(i,0,board);
            }
            if(board[i][board[0].size()-1] == 'O'){
                dfs(i,board[0].size()-1,board);
            }
        }

        for (int j = 0; j < board[0].size(); j++) {

            if (board[0][j] == 'O')
                dfs(0, j,board);

            if (board[board.size() - 1][j] == 'O')
                dfs(board.size() - 1, j, board);
        }
        
        for(int row = 0; row < board.size(); row++){
            for(int col = 0; col < board[0].size(); col++){
                if(board[row][col] == 'O'){
                    board[row][col] = 'X';
                }
                else if(board[row][col] == '#'){
                    board[row][col] = 'O';
}
            }
        }


    }
};
