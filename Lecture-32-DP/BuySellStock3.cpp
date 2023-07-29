class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int n = prices.size();

		vector<int> pastProfit(prices.size()), futureProfit(prices.size());

		pastProfit[0] = 0;
		int minPrice = prices[0];

		for (int i = 1; i < n; ++i)
		{
			pastProfit[i] = max(prices[i] - minPrice, pastProfit[i - 1]);
			minPrice = min(minPrice, prices[i]);
		}

		futureProfit[n - 1] = 0;
		int maxPrice = prices[n - 1];
		for (int i = n - 2; i  >= 0; --i)
		{
			futureProfit[i] =  max(futureProfit[i + 1], maxPrice - prices[i]);
			maxPrice =  max(maxPrice, prices[i]);
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans = max(ans, pastProfit[i] + futureProfit[i]);
		}
		return ans;

	}
};




