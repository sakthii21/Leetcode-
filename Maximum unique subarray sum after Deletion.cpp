class Solution {
    public:
        int maxSum(vector<int>& nums) {
          unordered_set<int>st;
            int maxi = INT_MIN ;
            int sum =0;
    
            for(int right:nums){
                if(right>0){
                    st.insert(right);
                }
                maxi = max(maxi,right);
            }
            if(st.empty()){
                return maxi;
            }
            for(int i:st){
                sum+=i;
            }
            return sum;
        }
    };©leetcode