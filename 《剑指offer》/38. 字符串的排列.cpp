class Solution {
public:
    unordered_set<string> st;
    void dfs(vector<string>& res,string s,int start,int end){
        if(start==end){
            if(!st.count(s)){
                res.push_back(s);
                st.insert(s);
            }
            return;
        }
        for(int i=start;i<=end;++i){
            swap(s[i],s[start]);
            dfs(res,s,start+1,end);
            swap(s[i],s[start]);
        }
        
    }
    vector<string> permutation(string s) {
        vector<string> res;
        if(s.length()==0) return res;
        dfs(res,s,0,s.length()-1);
       // unordered_set<string> st;
        for(int i=0;i<res.size();++i){
            st.insert(res[i]);
        }
        //res.clear();
       /* unordered_set<string>::iterator iter = st.begin();
        for(;iter!=st.end();iter++){
            res.push_back(*iter);
        }*/
        return res;
    }
};
