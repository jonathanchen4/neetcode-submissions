class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //use map key/value
        //key is gonna be the sorted version, and the value is gonna be the unsorted sSorted/s
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;
        for (string s : strs) {
            string x = s;
            sort(x.begin(), x.end());
            map[x].push_back(s);
        }

        for(auto &w : map) {
            result.push_back(w.second);
        }
        return result;
    }
};
