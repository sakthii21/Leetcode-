class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int n = nums.size();
            int total = accumulate(nums.begin(),nums.end(),0);
            int left =0;
            for(int i=0;i<n;i++){
                int right = total - left - nums[i];
                if(right==left){
                    return i;
                }
                left = left + nums[i];
            }
            return -1;
        }
    };