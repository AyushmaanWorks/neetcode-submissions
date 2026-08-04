class Solution {
public:
    string getKey(string a){
        vector<int> count(26, 0);
        for(char x: a){
            count[x -'a'] ++;
        }

        string key="";
        for(auto x: count){
            key += to_string(x) + "#";
        }
        return key;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map < string, vector<string> > groups;
        for(string x: strs){
            groups[getKey(x)].push_back(x);
        }
        
        vector<vector<string>> res;
        for(auto pair: groups){
            res.push_back(pair.second);
        }
        return res;
    }
};
