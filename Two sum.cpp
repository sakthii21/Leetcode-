class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
         //   vector<int>ans;
            // for(int i=0;i<n;i++){
            //     for(int j=i+1;j<n;j++){
            //         if(nums[i]+nums[j]==target){
            //             ans.push_back(i);
            //             ans.push_back(j);
            //         }
            //     }
            // }
            // return ans;
            map<int,int>mpp;
            for(int i=0;i<n;i++){
                int ele = nums[i];
                int ans = target - ele;
                if(mpp.find(ans)!=mpp.end()){
                    return {mpp[ans],i};
                }
                mpp[ele]=i;
            }
            return {};
        }
    };
    
    
    //  map<int,int>mpp;
    //        int n=nums.size();
    //        for(int i=0;i<n;i++){
    //              int ele = nums[i];
    //              int sum = target - ele ;
    //              if(mpp.find(sum) != mpp.end()){
    //                 return {mpp[sum],i};
    //              }
    //              mpp[ele]=i;
    //        }
    //        return{};