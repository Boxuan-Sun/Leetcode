class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> st;
        for(const int& num:nums){
            st.insert(num);
        }
        int curNum;
        int curLong=0;
        int longest=0;
        for(int i=0;i<nums.size();++i){
            if(!st.count(nums[i]-1)){
                curNum=nums[i];
                curLong=1;
                while(st.count(curNum+1)){
                    curLong++;
                    curNum++;
                }
            }
            longest=max(longest,curLong);
        }
        return longest;
    }
};
