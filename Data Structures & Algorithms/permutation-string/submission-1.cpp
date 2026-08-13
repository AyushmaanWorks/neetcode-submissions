class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0); //freq of each char in s1
        vector<int> freq2(26,0); //freq of each char in current window

        int k = s1.size();

        if (k > s2.size()) {
            return false;
        }

        for(int i  = 0; i < s1.size(); i++){
            freq1[s1[i] - 'a']++;
        }
        
        for(int i = 0; i<k;i++){
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2){
            return true;
        }

        for(int right = k; right<s2.size();right++){

            freq2[s2[right] - 'a']++;

            freq2[s2[right-k] - 'a']--;

            if(freq1 == freq2){
                return true;
            }

        }

        return false;
    }
};
