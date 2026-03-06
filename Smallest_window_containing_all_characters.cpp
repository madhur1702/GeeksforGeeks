class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        int n = s.size();
        vector<int> have(26,0),need(26,0);
        for(char i : p)
        {
            need[i-'a']++;
        }
        int required = p.size();
        int cnt = 0;
        int minlen = INT_MAX;
        int left = 0,start = -1;
        for(int right = 0;right<n;right++)
        {
            have[s[right]-'a']++;
            if(have[s[right] - 'a']<=need[s[right] - 'a'])
            {
                cnt++;
            }
            while(cnt == required)
            {
                if(right - left + 1<minlen)
                {
                    minlen = right - left + 1;
                    start = left;
                }
                have[s[left] - 'a']--;
                if(have[s[left] - 'a']<need[s[left] - 'a'])
                {
                    cnt--;
                }
                left++;
            }
        }
        if(start == -1)
        {
            return "";
        }
        return s.substr(start,minlen);
    }
};
