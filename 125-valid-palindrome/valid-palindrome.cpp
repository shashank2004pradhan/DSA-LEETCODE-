class Solution {
public:

bool isAlphanum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;

}





    bool isPalindrome(string s) {
        int st=0;
        int e=s.size()-1;

        while(st<e){
            //logic for when st and end aren't alphanumeric
            if(!isAlphanum(s[st])){
                st++;continue;
            }
            if(!isAlphanum(s[e])){
                e--;continue;
            }
            //when st != e
            if(tolower(s[st]) != tolower(s[e])){
                return false;
            }
            //if it passes the above checks, its true so inc st and dec e
            st++;
            e--;


        }
        return true;
        
    }
};