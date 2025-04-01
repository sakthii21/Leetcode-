class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
           int n=nums.size();
           vector<int>nums1;
           int sum=0;
           for(int i=0;i<n;i++){
            sum=sum+nums[i];
            nums1.push_back(sum);
           }
           return nums1;
        }
    };