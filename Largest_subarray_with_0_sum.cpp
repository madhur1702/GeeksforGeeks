class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0,maxi = 0;
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum == 0)
            {
                maxi = i+1;
            }else
            {
                if(hash.find(sum)!=hash.end())
                {
                    maxi = max(maxi,i - hash[sum]);
                }else
                {
                    hash[sum] = i;
                }
            }
        }
        return maxi;
    }
};
