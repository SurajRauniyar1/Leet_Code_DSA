class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        string token="";
        stringstream ss(path);
        while(getline(ss,token,'/')){
            if(token=="" || token==".") continue;
            if(token!=".."){
                st.push_back(token);
            }
            else if(!st.empty()){
                st.pop_back();
            }
        }
        if(st.empty()) return "/";
        string ans="";
        for(auto &token:st){
            ans +='/'+token;
      
        }
       return ans;
    }
};