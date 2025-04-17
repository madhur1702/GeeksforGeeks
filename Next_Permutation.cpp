
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n= arr.size();
        int i,j;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                break;
            }
            
        }
        if(i>=0)
        {
            for(j=n-1;j>i;j--)
            {
                if(arr[j]>arr[i])
                {
                    break;
                }
            }
            swap(arr[i],arr[j]);
        }
        sort(arr.begin()+i+1,arr.end());
    }
};
