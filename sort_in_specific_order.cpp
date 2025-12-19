class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int> odd,even,nums;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2 == 0)
            {
                even.push_back(arr[i]);
            }else
            {
                odd.push_back(arr[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        for(int i : odd)
        {
            nums.push_back(i);
        }
        for(int i : even)
        {
            nums.push_back(i);
        }
        for(int i = 0;i<nums.size();i++)
        {
            arr[i] = nums[i];
        }
    }
};
