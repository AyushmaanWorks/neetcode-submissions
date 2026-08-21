class Solution {
public:

    string key(string s){
        vector<int> vec(26,0);
        string temp =" ";

        for(auto x: s){
            vec[x -'a'] ++;
        }

        for(int i =0; i<vec.size();i++){
            temp += 'a'+i;
            temp += to_string(vec[i]);
        }

        return temp;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> collect;
        vector<vector<string>> ans;
        
        for(auto str: strs){
            string temp = key(str);
            collect[temp].push_back(str);
        }

        for (auto &[key, group] : collect) {
            ans.push_back(group);
        }

        return ans;
    }
};
