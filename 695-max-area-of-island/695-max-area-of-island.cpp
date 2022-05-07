class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int res = 0;
        
        r = grid.size();
        c = grid[0].size();
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(grid[i][j])
                    res = max(res, findMax(grid, i, j));
            }
        }
        
        return res;
        
    }
    
private:
    int r, c;
    
    int findMax(vector<vector<int>>& grid, int i, int j)
    {
        if(i < 0 || j < 0 || i >= r || j >= c || grid[i][j] == 0) return 0;
        
        grid[i][j] = 0;
        
        return 1 + findMax(grid, i + 1, j) + findMax(grid, i - 1, j) 
            + findMax(grid, i, j - 1) + findMax(grid, i, j + 1);
    
    }
    
};