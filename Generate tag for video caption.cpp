class Solution {
public:
    string generateTag(string caption) {
        stringstream ss(caption);
        string word;
        string tag = "#";
        bool firstword = true;

        while(ss>>word){
            for(char &ch:word) ch = tolower(ch);
            if(firstword){
                tag+=word;
                firstword = false;
            }else{
                word[0] = toupper(word[0]);
                tag+=word;
            }
        }
        string ans ="#";
        for(int i=1;i<tag.size();i++){
            if(isalpha(tag[i])) ans+=tag[i];
        }
        return ans.substr(0,min(100,(int)ans.size()));
    }
};©leetcode