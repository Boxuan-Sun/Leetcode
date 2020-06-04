class Solution {
public:
    bool judge(vector<int>& postorder,int left,int right){
        if(postorder.size()==0) return true;
        if(left>=right) return true;
        int k;
        for(int i=left;i<right;i++){
            if(postorder[i]>=postorder[right]){
                k=i;
                break;
            }
        }
        for(int i=k;i<right;++i){
            if(postorder[i]<=postorder[right]){
                return false;
            }
        }
        return judge(postorder,left,k-1)&&judge(postorder,k,right-1);
        //return true;
    }
    bool verifyPostorder(vector<int>& postorder) {
        if(postorder.size()==0) return true;
        return judge(postorder,0,postorder.size()-1);
    }
};
