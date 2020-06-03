class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size()==0) return true;
        stack<int> st;
        int j=0;
        for(int i=0;i<popped.size();++i){
            if(st.empty()||st.top()!=popped[j]){
                st.push(pushed[i]);
            }
            while(!st.empty()&&st.top()==popped[j]){
                st.pop();
                ++j;
            }
        }
        return st.empty();
    }
};
