class Solution {
public:
    string decodeString(string s) {
        stack<string>stringStack;
        stack<int>countStack;
        int num=0;
        string curr="";
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');

            }
            else if(ch=='['){
                countStack.push(num);
                stringStack.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                 int repeat = countStack.top();
                 countStack.pop();
                 string prev= stringStack.top();
                 stringStack.pop();
                 while(repeat--){
                    prev +=curr;
                 }
                 curr=prev;
            }
            else{
                curr +=ch;
            }
        }
        return curr;
    }
};