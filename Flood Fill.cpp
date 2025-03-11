class Solution {
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            //using dfs
            int colr = image[sr][sc];
            if(colr==color)return image;
            dfs(image,sr,sc,color,colr);
            return image;
            
        }
        void dfs(vector<vector<int>>& image,int sr,int sc,int color,int colr){
           if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size())return;
           if(image[sr][sc]!=colr) return;
           if(image[sr][sc]==color)return;
    
           image[sr][sc]= color;
    
            dfs(image,sr-1,sc,color,colr);
            dfs(image,sr+1,sc,color,colr);
            dfs(image,sr,sc-1,color,colr);
            dfs(image,sr,sc+1,color,colr);
        }
    };