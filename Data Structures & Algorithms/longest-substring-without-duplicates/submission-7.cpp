class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        unordered_map<char, int> lastseen;
        int l = 0;  int r = 0;

        for(int i = 0; i < s.size(); i++){
            if(lastseen.contains(s[i])){
                maxLength = max(maxLength, r-l);
                l = max(l,lastseen[s[i]]+1);
            }
            lastseen[s[i]] = i;
            r++;

        }

        maxLength = max(maxLength, r-l);

        return maxLength;

    }
};
