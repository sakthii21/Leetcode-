class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            int n = nums.size();
            int even=0;
            int odd=0;
            for(int i=0;i<n;i++){
                if(nums[i]%2==0) {
                    even++;
                }else{
                    odd++;
                }
            }
                for(int j=0;j<even;j++){
                    nums[j]=0;
                }
                for(int k=even;k<n;k++){
                    nums[k]=1;
                }
            
            
             sort(nums.begin(),nums.end());
                return nums;
        }
    };