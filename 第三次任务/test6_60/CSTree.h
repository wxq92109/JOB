typedef struct CSNode {  //����-�ֵܽڵ�Ķ���
	char data;
	struct CSNode *firstChild;
	struct CSNode *nextSibling;
} CSNode, *CSTree;
void createCSTree(CSTree &tree) {  //��������-�ֵܶ�����
	char c = getchar();
	if(c == '#')  tree = NULL;
	else {
		tree = (CSTree)malloc(sizeof(CSNode));  tree->data = c;
		createCSTree(tree->firstChild);
		createCSTree(tree->nextSibling);
	}
}
