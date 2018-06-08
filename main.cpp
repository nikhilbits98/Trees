#include"tree.cpp"

void main() {
	
	Tree head = NULL;
	cout << "Insertion Order:" << endl;
	for (int i = 0; i < 10; i++) {
		int seg = getNum();
		head = insert(head, seg);
		cout << i << "\t" << seg << endl;
	}
	head = insert(head, 267);
	cout << endl << "Display:" << endl;
	display(head);
	cout << endl;

	cout << endl << "Finding 267:" << endl;
	Tree del = find(head, 267);
	if (del == NULL)
		printf("Number not found.\n");
	else
		printf("Number found to be %d\n", del->value);

	cout << endl << "Finding 336:" << endl;
	Tree del2 = find(head, 336);
	if (del2 == NULL)
		printf("Number not found.\n");
	else
		printf("Number found to be %d\n", del2->value);

	head = deletes(head, 267);
	cout << endl << "Display After Deleting:" << endl;
	display(head);

	return;
}