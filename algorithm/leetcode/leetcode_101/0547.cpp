// 2021-06-28
// 547. 省份数量

int findCircleNum(vector<vector<int>> &isConnected) {
	int n = isConnected.size(), count = 0;
	vector<bool> visited(n, false);
	for (int i = 0; i < n; ++i) {
		if (!visited[i]) {
			dfs(isConnected, i, visited);
			++count;
		}
	}
	return count;
} 
void dfs(vector<vector<int>> &isConnected, int i, vector<bool> &visited) {
	visited[i] = true;
	for (int k = 0; k < isConnected.size(); ++k) {
		if (isConnected[i][k] == 1 && !visited[k]) {
			dfs(isConnected, k, visited);
		}
	}
}
