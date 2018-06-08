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
	return root;
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
	}
	else if (key < root->value) {
		root->left = deletes(root->left, key);
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
	printf("%d\t", root->value);
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
	return newT;
}