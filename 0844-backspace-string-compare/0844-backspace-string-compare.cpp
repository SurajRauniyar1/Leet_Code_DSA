class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 ="";
        string s2 ="";

        for(char ch:s){
            if(ch!='#'){
                s1.push_back(ch);
            }
            else if(!s1.empty()){
                s1.pop_back();
            }
        }
        for(char ch:t){
            if(ch!='#'){
                s2.push_back(ch);
            }
            else if(!s2.empty()){
                s2.pop_back();
            }
        }
        if(s1==s2){
            return true;
        }
        else return false;
    }
};