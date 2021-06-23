// 2021-06-23
// 序列化二叉树 （考虑到负数）

class Solution {
	TreeNode* deserializeCore(string &data, int &i) {
		if (data[i] == '#') {
			i++;
			return nullptr;
		}
		int num = 0, negativeFlag = 1;
		if (data[i] == '-') {
			negativeFlag = -1;
			i++;
		}
		while (data[i] != '!') {
			num = num * 10 + data[i] - '0';
			i++;
		}
		num = num * negativeFlag;
		TreeNode* root = new TreeNode(num);
		root -> left = deserializeCore(data, ++i);
		root -> right = deserializeCore(data, ++i);
		return root;
	}
public:
	char* Serialize(TreeNode *root) {
		if (root == nullptr) return "#!";
		string str = to_string(root -> val) + '!';
		str += Serialize(root -> left);
		str += Serialize(root -> right);
		char* res = new char[str.size()];
		for (int i = 0; i < str.size(); i++) {
			res[i] = str[i];
		}
		return res;
	}
    TreeNode* Deserialize(char *str) {
		int i = 0;
        string str2 = string(str);
		return deserializeCore(str2, i);
	}
};
