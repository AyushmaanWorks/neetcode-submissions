class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;  
        int L = 0;
        unordered_map<char, int> lastseen;

        for(int R=0; R<s.size(); R++){
            if(lastseen.count(s[R]) && lastseen[s[R]] >= L){
                L = lastseen[s[R]] + 1;;
            }
            
            lastseen[s[R]] = R;
            maxLength = max(R-L+1, maxLength);
        }

        return maxLength;
    }
     

};