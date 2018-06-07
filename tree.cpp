#include"tree.h"

Tree insert(Tree root, int key) {
	if (root == NULL) {
		return newNode(value);
	}
	else if (key > root.value) {
		root->right = insert(root->right, key);
	}
	else if (key < root.value) {
		root->left = insert(root->left, key);
	}
	return root;
}

Tree find(Tree root, int key) {
	if (root->value == key)
		return root;
	else if (key > root->value)
		return find(root->right, key);
	else if (key < root->value)
		return find(root->left, key);
	else
		return NULL;
}
Tree delete(Tree root, int key) {

}

Tree findMin(Tree root) {
	while (root->left != NULL)
		root = root->left;
	return root;
}

Tree newNode(int key) {
	Tree new = (Tree)malloc(sizeof(struct tree));
	new->value = key;
	new->left = NULL;
	new->right = NULL;
	return new;
}