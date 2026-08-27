class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxProfit=0
        bestBuy=prices[0]
        for price in prices:
            bestBuy=min(bestBuy,price)
            maxProfit=max(maxProfit, price-bestBuy)
        return maxProfit