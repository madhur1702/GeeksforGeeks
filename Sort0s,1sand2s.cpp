class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int f = 0,m = 0,l = arr.size()-1;
        while(m<=l)
        {
            if(arr[m]==1) 
            {
                m++;
            }else if(arr[m] == 0)
            {
                swap(arr[f],arr[m]);
                m++;
                f++;
            }else
            {
                swap(arr[l],arr[m]);
                l--;
            }
        }
        
    }
};
