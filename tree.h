#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

typedef struct tree* Tree;

// Structure of a tree
struct tree {
	int value;
	Tree left;
	Tree right;
};

//Prototype definitions
Tree insert(Tree root, int key);
Tree find(Tree root, int key);
Tree delete(Tree root, int key);
Tree newNode(int key);
Tree findMin(Tree root);