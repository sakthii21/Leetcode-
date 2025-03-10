class Solution {
    public:
        string removeDuplicates(string s) {
           // brutforce


            // stack<char>st;
            // string str ="";
            // st.push(s[0]);
            // for(int i=1;i<s.length();i++){
            //     if(st.empty() || st.top()!=s[i]){
            //         st.push(s[i]);
            //     }
            //     else{
            //         st.pop();
            //     }
               
            // }
            // while(!st.empty()){
            //     str+= st.top();
            //     st.pop();
            // }
            //  reverse(str.begin(),str.end());
            //  return str;

            //optimal
              string res = "";
            for (char& c : s)
                if (res.size() && c == res.back())
                    res.pop_back();
                else
                    res.push_back(c);
            return res;
        }
    };