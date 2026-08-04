class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !std::isalnum(c);
        }), s.end());


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
