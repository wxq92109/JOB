#define MAX_TREE_SIZE 100
typedef struct
{
	int data;
	int parent; /* 双亲位置域 */
} PTNode;
typedef struct
{
	PTNode nodes[MAX_TREE_SIZE];
	int n; /* 结点数 */
 } PTree;