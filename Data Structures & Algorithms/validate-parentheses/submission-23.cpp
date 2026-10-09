class Solution {
public:

    unordered_map<char, char> seen = {{'(',')'}, {'{','}'}, {'[',']'}};
    stack<char> st;
    bool isValid(string s) {
        for(char c: s){
            if(seen.contains(c)){
                st.push(seen[c]);
            }else if(!st.empty() && c == st.top()){
                st.pop();
            }else{
                return false;
            }

        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};
