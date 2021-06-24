// 2021-06-24
// 机器人的运动范围

bool canReach(int threshold, int x, int y) {
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	while (y > 0) {
		sum += y % 10;
		y /= 10;
	}
	return sum <= threshold;
} 

int movingCountCore(int threshold, int i, int rows, int j, int cols, vector<vector<bool>>& visit) {
	if (i >= rows || j >= cols || !canReach(threshold, i, j) || visit[i][j] == true) return 0;
	visit[i][j] = true;	// 当前已经走过了，并且满足要求，所以后续return要加上1
	return movingCountCore(threshold, i + 1, rows, j, cols, visit) +
		movingCountCore(threshold, i, rows, j + 1, cols, visit) + 1;	// 由于起点是[0,0]，所以只考虑向上或向右 
}

int movingCount(int threshold, int rows, int cols) {
	vector<vector<bool>> visit(rows, vector<bool>(cols, false));
	return movingCountCore(threshold, 0, rows, 0, cols, visit);
}
