class Solution {
    public:
        vector<string> commonChars(vector<string>& words) {
          vector<int>minfreq(26,INT_MAX);
          for(string str:words){
            vector<int>freq(26);
            for(char ch:str){
                freq[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                minfreq[i] = min(minfreq[i],freq[i]);
            }
          }
          vector<string>res;
          for(int i=0;i<26;i++){
              while(minfreq[i]-- >0){
                res.push_back(string(1,'a'+ i));
            }
          }
          return res;
        }
    };