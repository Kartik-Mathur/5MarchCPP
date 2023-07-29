class Solution {
public:
	int solve(vector<int>& prices, bool kyaKchKhareedaHai, int i, int transaction,
	          vector<vector<int> > &dp) {
		// base case
		if (i == prices.size() ||  transaction == 4) {
			return dp[i][transaction] = 0;
		}
		if (dp[i][transaction] != -1) return dp[i][transaction];
		// recursive case
		// 1. Ya toh khareedlo ya beechdo
		int op1 = 0, op2 = 0, op3 = 0;
		if (!kyaKchKhareedaHai) {
			op1 = -prices[i] + solve(prices, true, i + 1, transaction + 1, dp);
		}
		else {
			op2 = prices[i] + solve(prices, false, i + 1, transaction + 1, dp);
		}
		// 2. Ignore kardo
		op3  = 0 + solve(prices, kyaKchKhareedaHai, i + 1, transaction, dp);

		return dp[i][transaction] = = max(op1, max(op2, op3));
	}

	int maxProfit(vector<int>& prices) {
		int n = prices.size();
		vector<vector<int> > dp(n + 1, vector<int>(5, -1));
		return solve(prices, false, 0, 0, dp);

	}
};




