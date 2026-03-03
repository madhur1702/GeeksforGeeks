class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        unordered_map<int,int> hash;
        int n = arr.size();
        int maxi = 0;
        int j = 0;
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
            if(hash.size()>2)
            {
                hash[arr[j]]--;
                if(hash[arr[j]] == 0)
                {
                    hash.erase(arr[j]);
                }
                j++;
            }
            maxi = max(maxi,i-j+1);
        }
        return maxi;
    }
};
