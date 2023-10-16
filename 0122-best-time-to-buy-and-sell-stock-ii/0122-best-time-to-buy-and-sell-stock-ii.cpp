class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int MimPrice = prices[0];
        int R = 1;

        for(int i=0; i<prices.size() and R<prices.size(); )
        {
            
            while(prices[R] >= prices[R-1])
            {
                R++;
                if(R == prices.size()) break;
            }
            

            profit += max(0 , prices[R-1] - prices[i]);

            i = R;
            R++;
        }

        return profit;
    }
};