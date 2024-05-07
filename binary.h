#ifndef binary_h
#define binary_h
class Binary
{
private: 
	struct TreeNode {
		int value;
		TreeNode* left;
		TreeNode* right;
	};
	TreeNode* root;
public:
	Binary();
	~Binary();
	void insert(int);
	void dO();
	void insertNode(int, TreeNode*&);
	//void searchNode(int, TreeNode*&);
	void deleteNode(TreeNode*&);
	//int findMin(TreeNode*&);
	//int findMax(TreeNode*&);
	void displayInOrder(TreeNode*)const;
	void displayPreOrder(TreeNode*)const;
	void displayPostOrder(TreeNode*)const;
};

#endif