class Solution {
    public:
        int winningPlayerCount(int n, vector<vector<int>>& pick) {
        
            vector<vector<int>> ans(n, vector<int>(11, 0));
    
            for(const auto& p:pick){
                int a = p[0];
                int b= p[1];
                if(a>=0 && a<n &&b>=0 && b<11){
                   ans[a][b]++;
                }
            }
            int count =0;
            for(int i=0;i<n;i++){
                for(int j=0;j<11;j++){
                    if(ans[i][j]>=i+1){
                        count++;
                        break;
                    }
                }
            }
            return count;
        }
    };