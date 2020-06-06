class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int count=0;
        int res=nums[0];
        for(int i=1;i<nums.size();++i){
            if(nums[i]==res){
                count++;
            }
            else{
                count--;
            }
            if(count<0){
                res=nums[i];
                count=0;
            }
        }
        return res;
    }
};
