class Solution {
public:
    string removeOccurrences(string s, string part) {
        while( s.length()>0 && s.find(part) < s.length() ){
            int st = s.find(part);
            int e  = part.length();
            s.erase(st,e);
        }
        return s;
        
    }
};