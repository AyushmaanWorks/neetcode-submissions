class Solution {
public:


    string encode(vector<string>& strs) {
        string output = "";

        for(auto s: strs){
            output += to_string(s.size()) + "^" + s;
        }

        return output;
    }

    vector<string> decode(string s) {
        vector<string> msg;
        int i = 0;
        
        while(i < s.size()){
            int j = i;
            while(s[j] != '^'){
                j++;
            }

            int length = std::stoi(s.substr(i, j - i));

            msg.push_back(s.substr(j+1, length));
            i = j + 1 + length;

        }

        return msg;

    }
};
