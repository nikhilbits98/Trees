#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>


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
Tree deletes(Tree root, int key);
Tree newNode(int key);
Tree findMin(Tree root);
void display(Tree root);
int getNum();