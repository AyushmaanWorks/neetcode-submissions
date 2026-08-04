class Solution {
public:
    bool isPalindrome(string s) {
        int sz = s.size();
        int l = 0;
        int r = sz - l - 1;
        while(l < r){
            if(!std::isalnum(s[l])){
                l++;
            }
            else if(!std::isalnum(s[r])){
                r--;
            }
            else{
                if((tolower(s[l]) != tolower(s[r]))){
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;



    }
};
