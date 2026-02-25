class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
            {
                arr[i] = 1;
            }else
            {
                arr[i] = -1;
            }
        }
        unordered_map<int,int> hash;
        int sum = 0,maxi = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum > 0)
            {
                maxi = i+1;
            }
            else{
            if(hash.find(sum-1)!=hash.end())
            {
                int len = i - hash[sum-1];
                maxi = max(maxi,len);
            }}
            if(hash.find(sum)==hash.end())
            {
                hash[sum] = i;
            }
        }
        return maxi;
    }
};
