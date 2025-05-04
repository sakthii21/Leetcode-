
You are given a positive integer n.

Return the maximum product of any two digits in n.

Note: You may use the same digit twice if it appears more than once in n.

 

Example 1:

Input: n = 31

Output: 3

Explanation:

The digits of n are [3, 1].
The possible products of any two digits are: 3 * 1 = 3.
The maximum product is 3.
Example 2:

Input: n = 22

Output: 4

Explanation:

The digits of n are [2, 2].
The possible products of any two digits are: 2 * 2 = 4.
The maximum product is 4.
Example 3:

Input: n = 124

Output: 8

Explanation:

The digits of n are [1, 2, 4].
The possible products of any two digits are: 1 * 2 = 2, 1 * 4 = 4, 2 * 4 = 8.
The maximum product is 8.©leetcode







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
