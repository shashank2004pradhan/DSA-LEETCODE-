#include <cctype> // ✅ Needed for isalnum() and tolower()

class Solution {
public:

    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;

        while (st < e) {
            // ✅ Replaced custom isAlphanum with standard isalnum
            if (!isalnum(s[st])) {
                st++;
                continue;
            }
            if (!isalnum(s[e])) {
                e--;
                continue;
            }

            // ✅ Optimization: store tolower results to avoid recomputation
            char c1 = tolower(s[st]);
            char c2 = tolower(s[e]);

            if (c1 != c2) {
                return false;
            }

            st++;
            e--;
        }
        return true;
    }
};
