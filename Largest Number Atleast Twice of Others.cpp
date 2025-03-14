class Solution {
    public:
        int dominantIndex(vector<int>& nums) {
            int n = nums.size();
            int maxi=INT_MIN;
            int ind;
            int flag=0;
            for(int i=0;i<n;i++){
                if(nums[i]>maxi){
                 maxi = nums[i];
                 ind = i;
                }
               
            }
            for(int i=0;i<n;i++){
                if(i!=ind && maxi<2*nums[i]) return -1;
            }
          return ind;
        }
    };