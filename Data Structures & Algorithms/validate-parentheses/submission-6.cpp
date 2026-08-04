class Solution {
public: 

    char expect(char c){
        if(c == '('){
            return ')';
        }
        if(c == '['){
            return ']';
        }
        if(c == '{'){
            return '}';
        }
    }
    stack<char> expecting;

    bool isValid(string s) {
        
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        for(int i = 0; i <= s.size() - 1; i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                expecting.push(expect(s[i]));
            }else if(expecting.size() > 0){
                if(expecting.top() == s[i]){
                    expecting.pop();
                    continue;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }

        if(expecting.size() > 0){
            return false;
        }else{
            return true;
        }
    }
};
