class Solution {
public:
    void paintPixel(vector<vector<int>>& image, int sr, int sc, int center, int newColor)
    {
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() 
           || image[sr][sc] != center || image[sr][sc] == newColor) return;
        
        image[sr][sc] = newColor;
        paintPixel(image, sr - 1, sc, center, newColor);
        paintPixel(image, sr + 1, sc, center, newColor);
        paintPixel(image, sr, sc - 1, center, newColor);
        paintPixel(image, sr, sc + 1, center, newColor);

    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        /*
            a recursive function that paints the pixel if it's the correct color
            then, recurses on neighboring pixels.
        */
        
        int center = image[sr][sc];
        
        paintPixel(image, sr, sc, center, newColor);
        
        return image;
        
        
    }
};