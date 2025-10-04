class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.size() == 0) {
                    return false;
                }

                // ✅ Only check matching when current char is a closing bracket
                if((st.top() == '(' && s[i] == ')') || 
                   (st.top() == '{' && s[i] == '}') || 
                   (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }

            // ❌ Mistake: This part runs for both opening and closing brackets
            // if((st.top() == '(' && s[i] ==')') || 
            //    (st.top() == '{' && s[i] =='}') || 
            //    (st.top() == '[' && s[i] ==']')) {
            //     st.pop();
            // } else {
            //     return false;
            // }
        }

        return st.size() == 0;
    }
};
