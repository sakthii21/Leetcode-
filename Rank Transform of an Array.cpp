class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans (arr);
        sort(ans.begin(),ans.end());
        unordered_map<int,int>mpp;
        for(int num:ans){
            mpp.emplace(num,mpp.size()+1);
        }
        for(int i=0;i<ans.size();i++){
            ans[i]=mpp[arr[i]];
        }
        return ans;
    }
};