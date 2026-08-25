class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> cnts(26,0);

        for(char c: s){cnts[c - 'a']++;}
        for(char c: t){cnts[c - 'a']--;}

        for(int i: cnts){if(i != 0) return false;}
        return true;
    }
};
