
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j=0;
        vector<int> nums;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]!= 0)
            {
                nums.push_back(arr[i]);
                j++;
            }
        }
        while(j<n)
        {
            nums.push_back(0);
            j++;
        }
        for(int i=0;i<n;i++)
        {
                arr[i]=nums[i];
        }
    }
};
