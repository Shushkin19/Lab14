#include"Worker.h"
#include"LinkeList.h"
#include<iostream>
Worker& List::get(List* l, int num) {
	Node* cur = l->head;
	int count = 0;
	if (num < 0 || num >= l->size) {
		printf("error");
	}

	while (count != num) {
		cur = cur->next;
		count++;
	}
	return *cur->data;
}

Worker::Worker(const char* n, int t) {
	int size = strlen(n) + 4;
	name = new char[size];
	
	strcpy_s(name, sizeof(name), n);
	id = rand();
	profid = t;
};
