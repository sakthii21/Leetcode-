class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n =  nums.size();
        //  int ans;
        //  map<long long,int>mpp;
        //  for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        //  }
        //  for(auto it:mpp){
        //     if(it.second==1){
        //         ans = it.first;
        //     }
        //  }
        //  return ans;
        int ans =0;
        for(int i=0;i<n;i++){
            ans = ans^nums[i];
        }
        return ans;
    }


};
