#pragma once
#include"Worker.h"


class Node {
public:
	Node* next;
	Worker* data;
	Node();
};

class List {
	Node* head;
	int size;
public:
	List();
	~List();
	void push_back(Worker& w);
	Worker& get(List* l, int num);
	void pop_front();
	void list_erase(int id);
	char* find_worker(int id);
	
};

