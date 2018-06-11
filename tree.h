#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<iomanip>
#include<string.h>
#include<vector>

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

vector<vector<string>> print2D(Tree root);
void fill(vector<vector<string>> res, Tree root, int i, int l, int r);