class Solution {
    public:
        int findJudge(int n, vector<vector<int>>& trust) {
           
    
            vector<int>out(n+1);
            vector<int>in(n+1);
    
            for(int i=0;i<trust.size();i++){
                int a = trust[i][0];
                int b= trust[i][1];
                out[a]++;
                in[b]++;
            }
            for(int i=1;i<=n;i++){
                if(in[i]== n-1 && out[i]==0){
                    return i;
                }
            }
            return -1;
        }
    };