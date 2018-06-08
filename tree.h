#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<iomanip>

#define COUNT 10

using namespace std;

typedef struct tree* Tree;

// Structure of a tree
struct tree {
	int value;
	Tree left;
	Tree right;
	int ht;
};

//Prototype definitions
Tree insert(Tree root, int key);
Tree find(Tree root, int key);
Tree deletes(Tree root, int key);
Tree newNode(int key);
Tree findMin(Tree root);
void display(Tree root);
int getNum();

void printUtil(Tree root, int space);
void printTree(Tree root);

int getHt(Tree root);
int max(int a, int b);