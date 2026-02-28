class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int i = 0;
        int n = arr1.size();
        int m = arr2.size();
        int j = m-1;
        int val1,val2;
        int minidiff = INT_MAX;
        while(i<n && j>=0)
        {
            int sum = arr1[i] + arr2[j];
            int diff = abs(sum - x);
            if(diff<minidiff)
            {
                minidiff = diff;
                val1 = arr1[i];
                val2 = arr2[j];
            }
            if(sum>x)
            {
                j--;
            }else
            {
                i++;
            }
        }
        return {val1,val2};
    }
};
