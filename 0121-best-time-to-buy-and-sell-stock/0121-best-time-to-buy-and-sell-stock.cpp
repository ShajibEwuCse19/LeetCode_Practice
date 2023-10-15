class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int Min = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > Min) profit = max(profit , prices[i] - Min);

            Min = min(Min , prices[i]);
        }

        return profit;
    }
};