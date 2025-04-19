
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int minprice = prices[0];
        int profit = 0;
        for(int i=1;i<n;i++)
        {
            profit = max(profit,prices[i]-minprice);
            minprice = min(minprice,prices[i]);
        }
        return profit;
    }
};
