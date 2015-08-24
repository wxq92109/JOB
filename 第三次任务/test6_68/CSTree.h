typedef struct CSNode {  //孩子-兄弟节点的定义
	char data;
	struct CSNode *firstChild;
	struct CSNode *nextSibling;
} CSNode, *CSTree;
void createCSTree(CSTree &tree) {  //创建孩子-兄弟二叉树
	char c = getchar();
	if(c == '#')  tree = NULL;
	else {
		tree = (CSTree)malloc(sizeof(CSNode));  tree->data = c;
		createCSTree(tree->firstChild);
		createCSTree(tree->nextSibling);
	}
}
