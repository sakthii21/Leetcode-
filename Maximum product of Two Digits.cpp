class Solution {
    public:
        int maxProduct(int n) {
            vector<int>nums;
            unordered_map<int,int>freq;
            
            while(n>0){
                int d=n%10;
                nums.push_back(d);
                freq[d]++;
                n/=10;
            }
            int maxi = 0;
            for(int i=0;i<nums.size();i++){
                for(int j=i;j<nums.size();j++){
                    if(i==j){
                        if(freq[nums[i]]>=2){
                            maxi = max(maxi,nums[i]*nums[i]);
                        }
                    }else{
                
                    maxi = max(maxi,nums[i]*nums[j]);
                }
            }
            }
            return maxi;
        }
    };