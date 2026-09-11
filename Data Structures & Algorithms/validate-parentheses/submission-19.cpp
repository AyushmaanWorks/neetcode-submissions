class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> key = {{'(',')'}, {'{','}'}, {'[',']'}};

        for(int i = 0; i < s.size(); i++){
            cout<< i<<endl;
            if(key.contains(s[i])){
                st.push(key[s[i]]);
                cout<<"ran 1"<<endl;
                continue;
            }
            if(!st.empty()){
                if(st.top()!= s[i]){
                    return false;
                }else{
                    st.pop();
                }
            }else{
                return false;
            }
        }

        if(st.empty()){
            return true;
        }
        return false;

    }
};
