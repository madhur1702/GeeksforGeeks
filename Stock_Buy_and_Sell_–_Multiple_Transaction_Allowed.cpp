

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int profit = 0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                int baseprice = prices[i-1];
                profit += prices[i]-baseprice;
            }
        }
        return profit;
    }
};
