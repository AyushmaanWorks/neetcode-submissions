class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ss;
        unordered_map<char,int> ts;
        if(s.size() != t.size()) return false;
        for(char i: s){
            ss[i]++;
        }
        for(char i: t){
            ts[i]++;
        }
        for(char c: s){
            if(ss[c] != ts[c]){
                return false;
            }
        }
        return true;
    }
};
