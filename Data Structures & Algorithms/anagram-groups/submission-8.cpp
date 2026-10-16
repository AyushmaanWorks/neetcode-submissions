class Solution {
public:

    string genkey(string str){
        vector<int> vec(26,0);
        string key = " ";

        for(char c: str){
            vec[c-'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(vec[i] != 0){
                key+='#';
                key+=to_string(vec[i]);
                key+= 'a' + i;
            }
        }

        return key;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen;
        vector<vector<string>> ans;

        for(string str: strs){
            string key = genkey(str);
            if(seen.contains(key)){
                seen[key].push_back(str);

            }else{
                seen[key] = {str};
            }
        }

        for(auto [a,b]: seen){
            ans.push_back(b);
        }

        return ans;
    }   
};
