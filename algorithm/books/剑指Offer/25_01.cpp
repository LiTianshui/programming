// 2021-06-12
// 复杂链表的复制 （哈希表） 

RandomListNode* Clone(RandomListNode* pHead) {
	if (pHead == nullptr) {
		return nullptr;
	}
	std::unordered_map<RandomListNode*, RandomListNode*> hash_map;
	for (RandomListNode* p = pHead; p!= nullptr; p = p -> next) {
		hash_map[p] = new RandomListNode(p -> label);
	}
	for (RandomListNode* p = pHead; p!= nullptr; p = p -> next) {
		hash_map[p] -> next = hash_map[p -> next];
		hash_map[p] -> random = hash_map[p -> random];
	}
	return hash_map[pHead];
}
