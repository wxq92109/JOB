#define MAX_TREE_SIZE 100
typedef struct
{
	int data;
	int parent; /* ˫��λ���� */
} PTNode;
typedef struct
{
	PTNode nodes[MAX_TREE_SIZE];
	int n; /* ����� */
 } PTree;