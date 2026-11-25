class Solution {
public:
    bool isPalindrome(string s) {
        //something to do with isalpha
        string res = "";
        if(s == "" || s.size() == 1) return true;
        for(char& i : s) {
            if(isalnum(i)) {
                res += tolower(i);
            }
        }
        int i = 0, j = res.size() - 1;
        while(i < j) {
            if(res[i] != res[j]) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};
