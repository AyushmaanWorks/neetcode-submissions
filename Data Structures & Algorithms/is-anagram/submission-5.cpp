class Solution {
public:

    string getKey(string k){
        vector<int> keyvec(26,0);
        string key = " ";

        for(char c: k){
            keyvec[c - 'a']++;
        }

        for(int i = 0; i < keyvec.size(); i++){
            if(keyvec[i]!=0){
                for(int x = 0; x < keyvec[i]; x++){
                    key+='a'+i;
                }
            }
        }

        return key;
    }

    bool isAnagram(string s, string t) {
        return getKey(s) == getKey(t)?true:false;
    }
};
