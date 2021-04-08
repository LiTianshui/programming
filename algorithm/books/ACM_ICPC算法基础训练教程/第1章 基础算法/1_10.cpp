// 1-10 -- Gone Fishing
// 2020-11-26

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;
class Node
{
	public:
		int name, num;
		Node(int n = 0, int u = 0)
		{
			name = n;
			num = u;
		}
		bool operator<(const Node n) const		// 重载小于号 
		{
			if (num == n.num) return name > n.name;
			return num < n.num;
		}
};

int n, h, ti[40], fi[50], di[50], ans[50];
int fishing(int p)
{
	memset(ans, 0, sizeof(ans));
	int time = h * 12, result = 0;
	for (int i = 0; i < p; i++) time -= ti[i];		// 减去路上用的时间
	priority_queue<Node>que;						// 优先队列维护当前能钓到的鱼最多的湖泊
	for (int i = 0; i <= p; i++)
		if (fi[i] > 0)
			que.push(Node(i, fi[i]));
	Node node;
	while(time > 0)									// 只要有剩余的时间就在能钓鱼最多的湖泊钓鱼 
	{
		if (que.empty()) break;						// 不能再钓到鱼了就跳出
		time--;
		node = que.top();							// 选取能钓鱼最多的湖泊
		que.pop();
		result += node.num;
		node.num -= di[node.name];					// 每次钓鱼之后该湖泊下次能钓到的鱼减少
		if (node.num > 0) que.push(node);
		ans[node.name] += 5; 
	}
	return result;
}

int main()
{
	bool flag = 0;
	while (cin >> n && n)							// 输入湖泊个数 
	{
		if (flag) cout << '\n';						// 相邻的数据输出一个空行
		flag = 1;
		cin >> h;									// John有h小时的时间
		for (int i = 0; i < n; i++) cin >> fi[i];	// 初始每单位时间可以钓到的鱼 
		for (int i = 0; i < n; i++) cin >> di[i];	// 每单位可钓到的鱼的递减数量 
		for (int i = 0; i < n-1; i++) cin >> ti[i];	// 前往下一个湖的单位时间 
		int ma = 0, manum = 0, s;
		for (int i = 0; i < n; i++)					// 枚举到达最远的湖泊
		{
			s = fishing(i);							// 在这些湖泊里钓尽可能多的鱼
			if (ma < s)								// 更新结果 
			{
				ma = s;
				manum = i;
			}
		}
		fishing(manum);
		int sum = 0;								// 之后获取题目需要输出的信息
		for (int i = 0; i < n; i++) sum += ans[i];
		for (int i = 0; i < manum; i++) sum += ti[i] * 5;
		sum = h * 60 - sum;
		cout << ans[0] + sum;
		for (int i = 1; i < n; i++) cout << ", " << ans[i];
		cout << '\n' << "Number of fish expected: " << ma << endl; 
	}
	return 0;
}
