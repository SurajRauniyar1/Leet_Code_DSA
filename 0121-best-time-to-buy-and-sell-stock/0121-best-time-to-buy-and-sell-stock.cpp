class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, bestBuy=INT_MAX;
        for(int p:prices){
            bestBuy=min(bestBuy,p);
            maxProfit=max(maxProfit,p-bestBuy);
        }
        return maxProfit;
    }
};