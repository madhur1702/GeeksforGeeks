
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> hash;
        for(int i : arr)
        {
            hash[i]++;        }
            return hash[target];
    }
};
