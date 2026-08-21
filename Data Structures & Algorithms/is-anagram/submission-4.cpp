class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())return false;
        //create a vector to store values for each alphabet
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;


        for(int i = 0; i < s.size(); i++){
            sm[s[i]]++;
            tm[t[i]]++;
        }
        for(auto x: sm){
            if(sm[x.first] != tm[x.first]){
                return false;
            }
        }

 

        return true;
    }
};
