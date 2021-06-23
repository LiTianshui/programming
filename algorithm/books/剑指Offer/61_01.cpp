// 2021-06-23
// 序列化二叉树 （非考虑到负数）

class Solution {
private:
	string SerializeCore(TreeNode* root) {
		if (root == nullptr) {
			return "#!";
		}
		string str;
		str = to_string(root -> val) + "!";
		str += SerializeCore(root -> left);
		str += SerializeCore(root -> right);
		return str;
	}
	TreeNode* DeserializeCore(char* &str) {
		if (*str == '#') {
			str++;
			return nullptr;
		}
		int num = 0;
		while (*str != '!') {
			num = num * 10 + *str - '0';
			str++;
		}
		TreeNode* node = new TreeNode(num);
		node -> left = DeserializeCore(++str);
		node -> right = DeserializeCore(++str);
		return node;
	}
public:
	char* Serialize(TreeNode* root) {
		string str = SerializeCore(root);
		char* res = new char[str.size()];
		for (int i = 0; i < str.size(); i++) {
			res[i] = str[i];
		}
		return res;
	}
	TreeNode* Deserialize(char* str) {
		return DeserializeCore(str);
	}
}; 
