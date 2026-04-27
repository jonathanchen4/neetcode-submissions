class Solution {
public:
    bool isPalindrome(string s) {
        
        string palin = "";
        for (char c : s) {
            if (isalnum(c)) {
                palin += tolower(c);
            }
        }
        return palin == string(palin.rbegin(), palin.rend());
    }
};
