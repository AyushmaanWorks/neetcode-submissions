class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int fresh = 0;

        for(int i = 0; i<= grid.size()-1; i++){
            for(int j = 0; j<=grid[0].size() - 1; j++){
                if(grid[i][j] == 2){
                    rotten.push({i,j});
                } else if(grid[i][j] == 1){
                    fresh++;
                }      
            }
        }

        if (fresh == 0)
            return 0;

        int mins = 0;

        vector<int> dr = {0,0,1,-1};
        vector<int> dc = {1,-1,0,0};



        while(!rotten.empty()){

        bool rottedThisMinute = false;
        int sz = rotten.size();
            
            for(int k =0; k <sz;k++){
                int x = rotten.front().first;
                int y = rotten.front().second;


                rotten.pop();                

                for(int i = 0; i<4;i++){

                int ni = x+dr[i];
                int nc = y + dc[i];

                if(ni<0||nc<0||ni>=grid.size()||nc>=grid[0].size()||grid[ni][nc] != 1){
                    continue;
                }

                grid[ni][nc] = 2;
                fresh--;
                rottedThisMinute = true;
                rotten.push({ni,nc});

                }
            }
        

            if(rottedThisMinute){
                mins++;
            }
            

        }

        return (fresh == 0) ? mins : -1;

    }
};
