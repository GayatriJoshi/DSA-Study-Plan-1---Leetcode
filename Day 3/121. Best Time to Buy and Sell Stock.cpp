class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrize=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            minPrize=min(prices[i],minPrize);
            profit=max(prices[i]-minPrize,profit);
        }
        return profit;
    }
};
