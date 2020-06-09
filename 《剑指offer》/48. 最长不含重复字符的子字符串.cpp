int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_set<char> chars;
        int right=0;
        int maxLen=0;
        for(int left=0;left<s.length();left++){
            while(right<s.length()&&!chars.count(s[right])){
                chars.insert(s[right]);
                right++;
            }
            maxLen=max(maxLen,right-left);
            if(right==s.size()) break;
            chars.erase(s[left]);
        }
        return maxLen;
    }
