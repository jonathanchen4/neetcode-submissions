class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> temp;

        for(string i : strs) {
            string sorted = i;
            sort(sorted.begin(), sorted.end());
            temp[sorted].push_back(i);
        }
        for(auto i : temp) {
            result.push_back(i.second);
        }
        return result;
    }
};
