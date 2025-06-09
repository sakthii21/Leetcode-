class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int len =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<j;k++){
                    sum = sum+nums[i];
                    if(sum==k){
                        len = max(len,j-i+1);
                    }
                }
               
               
            }
        }
        return len;
    }
};
