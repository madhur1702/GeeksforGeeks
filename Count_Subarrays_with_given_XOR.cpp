class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int xor1 = 0;
        unordered_map<int,int> hash;
        hash[0] = 1;
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            xor1 ^= arr[i];
            int required = xor1^k;
            if(hash.find(required)!=hash.end())
            {
                count += hash[required];
            }
            hash[xor1]++;
        }
        return count;
    }
};
