class TimeMap {
public:
    unordered_map<string, pair<vector<int>, vector<string>>> table;

    TimeMap() = default;
    
    void set(string key, string value, int timestamp) {
        (table[key].first).push_back(timestamp);
        (table[key].second).push_back(value);

    }
    
    string get(string key, int timestamp) {
        auto it =  table.find(key);
        if(it == table.end()) return ""; 
        auto& [a, b] = it->second;
        
        int left = 0;
        int right = a.size() - 1;
        int mid;

        while(left<=right){
            mid = left + (right-left)/2;
            if(a[mid] > timestamp){
                right = mid -1;

            }else{
                left = mid+1;
            }
        }

        if(left == 0)return "";

        return b[left-1];

    }
};
