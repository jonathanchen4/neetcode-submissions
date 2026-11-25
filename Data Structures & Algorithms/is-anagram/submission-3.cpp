class Solution {
public:
    bool isAnagram(string s, string t) {
        auto sSorted = s;
        auto tSorted = t;

        sort(sSorted.begin(), sSorted.end());
        sort(tSorted.begin(), tSorted.end());

        return sSorted == tSorted;
    }
};
