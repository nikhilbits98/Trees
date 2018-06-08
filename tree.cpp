#include"tree.h"

Tree insert(Tree root, int key) {
	if (root == NULL) {
		return newNode(key);
	}
	else if (key > root->value) {
		root->right = insert(root->right, key);
		
	}
	else if (key < root->value) {
		root->left = insert(root->left, key);
	}
	root->ht = 1 + max(getHt(root->left), getHt(root->right));
	return root;
}

int getHt(Tree root) {
	if (root == NULL)
		return 0;
	return root->ht;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int updateHeight(Tree root) {
	if (root == NULL)
		return -1;
	int left, right;
	left = updateHeight(root->left);
	right = updateHeight(root->right);
	if (left>right) {
		root->ht= 1 + left;
		return 1 + left;
	}
	else{
		root->ht = 1 + right;
		return 1 + right;
	}	
}

Tree find(Tree root, int key) {
	if (root == NULL)
		return NULL;
	else if (root->value == key)
		return root;
	else if (key > root->value)
		return find(root->right, key);
	else if (key < root->value)
		return find(root->left, key);
	return NULL;
}
Tree deletes(Tree root, int key) {
	if (root == NULL)
		return root;
	else if (key > root->value) {
		root->right = deletes(root->right, key);
		root->ht = 1 + max(getHt(root->left), getHt(root->right));
	}
	else if (key < root->value) {
		root->left = deletes(root->left, key);
		root->ht = 1 + max(getHt(root->left), getHt(root->right));
	}
	if (key == root->value) {
		if (root->left == NULL) {
			Tree temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			Tree temp = root->left;
			free(root);
			return temp;
		}
		else {
			Tree temp = findMin(root->right);
			root->value = temp->value;
			root->right = deletes(root->right, temp->value);
		}
		root->ht = 1 + max(getHt(root->left), getHt(root->right));
		return root;
			
	}
}

Tree findMin(Tree root) {
	while (root->left != NULL)
		root = root->left;
	return root;
}

void display(Tree root){
	if (root == NULL)
		return;
	display(root->left);
	printf("%d(%d)\t", root->value,root->ht);
	display(root->right);
}

int getNum()
{	
	//srand(time(0));
	int num = (rand() % 500) + 1;
	return num;
}

Tree newNode(int key) {
	Tree newT = (Tree)malloc(sizeof(struct tree));
	newT->value = key;
	newT->left = NULL;
	newT->right = NULL;
	newT->ht = 1;
	return newT;
}

void printUtil(Tree root, int space) {

}

void printTree(Tree root) {

}