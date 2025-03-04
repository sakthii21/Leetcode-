class Solution {
    public:
        int subarraySum(vector<int>& nums) {
            //using prefix sum
            int n=nums.size();
            int sum =0;
            vector<int>prefix(n+1);
            prefix[0]=0;
            for(int i=0;i<n;i++){
                prefix[i+1] = prefix[i]+nums[i];
            }
            for(int i=0;i<n;i++){
                int start = max(0,i-nums[i]);
                sum +=prefix[i+1]-prefix[start];
            }
            return sum;
        }
    };