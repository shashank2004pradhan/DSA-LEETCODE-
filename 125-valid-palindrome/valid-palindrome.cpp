class Solution {
public:

// ✅ Optimization: Avoid calling tolower() multiple times for the same char
bool isAlphanum(char ch){
    if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){ // ✅ Fixed: avoid redundant tolower calls
        return true;
    }
    return false;
}

    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;

        while(st < e){
            // skip non-alphanumeric chars
            if(!isAlphanum(s[st])){
                st++; continue; // ✅ Fixed: comma operator is invalid, replaced with semicolon
            }
            if(!isAlphanum(s[e])){
                e--; continue; // ✅ Fixed: same as above
            }

            // ✅ Optimization: store tolower result to avoid recomputation
            char c1 = tolower(s[st]);
            char c2 = tolower(s[e]);

            if(c1 != c2){
                return false;
            }

            st++;
            e--;
        }
        return true;
    }
};
