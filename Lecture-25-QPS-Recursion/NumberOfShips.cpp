// https://leetcode.com/problems/number-of-ships-in-a-rectangle/description/
/**
 * // This is Sea's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Sea {
 *   public:
 *     bool hasShips(vector<int> topRight, vector<int> bottomLeft);
 * };
 */

class Solution {
public:
	int countShips(Sea sea, vector<int> tr, vector<int> bl) {
		// base case
		if (bl[0] > tr[0] || bl[1] > tr[1] || !sea.hasShips(tr, bl)) return 0;
		if (tr[0] == bl[0] and tr[1] == bl[1]) return 1;

		int x0, x1, y0, y1;
		x0 = bl[0]; y0 = bl[1]; x1 = tr[0]; y1 = tr[1];
		// recursive case
		int mx = (x0 + x1) / 2;
		int my = (y0 + y1) / 2;

		int topRightBox = countShips(sea, tr, {mx + 1, my + 1});
		int bottomLeftBox = countShips(sea, {mx, my}, bl);
		int topLeftBox = countShips(sea, {mx, y1}, {x0, my + 1});
		int bottomRightBox = countShips(sea, {x1, my}, {mx + 1, y0});
		return topRightBox + bottomLeftBox + topLeftBox + bottomRightBox;
	}
};

