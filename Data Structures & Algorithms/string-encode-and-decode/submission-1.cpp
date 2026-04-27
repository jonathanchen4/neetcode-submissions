class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        vector<int> sizes;
        string res = "";
        for (string& s : strs) {
            sizes.push_back(s.size());
        }

        for (int x : sizes) {
            res += to_string(x) + ',';
        }

        res += '#';

        for(string s : strs) {
            res += s;
        }
        return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) {
            return {};
        }

        vector<string> res;
        vector<int> sizes;
        int i = 0;

        while(s[i] != '#') {
            string curr = "";
            while (s[i] != ',') {
                curr += s[i];
                ++i;
            }
            sizes.push_back(stoi(curr));
            ++i;

        }
        ++i;
        for (int x : sizes) {
            res.push_back(s.substr(i, x));
            i += x;
        }
        return res;

    }
};
