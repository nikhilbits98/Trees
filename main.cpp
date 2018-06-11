#include"tree.cpp"

void main() {
	
	Tree head = NULL;
	cout << "Insertion Order:" << endl;
	for (int i = 0; i < 10; i++) {
		int seg = getNum();
		head = insert(head, seg);
		cout << i << "\t" << seg << endl;
	}
	head = insert(head, 61);
	cout << endl << "Display:" << endl;
	display(head);
	cout << endl;

	cout << endl;
	cout << endl;

	printTree(head);

	/*
	cout << endl;
	cout << endl;

	vector<vector<string>> printss;
	printss = print2D(head);

	for (int i = 0; i < printss.size(); i++) {
		for (int j = 0; j < printss[i].size(); j++) {
			printf("%s", printss[i][j]);
		}
		cout << endl;
	}
	*/

	/*
	cout << endl << "Finding 61:" << endl;
	Tree del = find(head, 61);
	if (del == NULL)
		printf("Number not found.\n");
	else
		printf("Number found to be %d\n", del->value);

	cout << endl << "Finding 36:" << endl;
	Tree del2 = find(head, 36);
	if (del2 == NULL)
		printf("Number not found.\n");
	else
		printf("Number found to be %d\n", del2->value);

	head = deletes(head, 61);
	cout << endl << "Display After Deleting:" << endl;
	display(head);
	*/
	return;
}