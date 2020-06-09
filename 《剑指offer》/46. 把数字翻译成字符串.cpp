int translateNum(int num) {
        string str=to_string(num);
        int len=str.length();
        vector<int> dp(len+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=1;i<len;++i){
            if(str[i-1]=='0'||str[i-1]>'2'||(str[i-1]=='2')&&str[i]>'5'){
                dp[i+1]=dp[i];
            }
            else{
                dp[i+1]=dp[i-1]+dp[i];
            }
        }
        return dp[len];
    }
