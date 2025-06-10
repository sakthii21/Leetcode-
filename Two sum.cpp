**TWO SUM** 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

 



















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
