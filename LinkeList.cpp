#include "LinkeList.h"
#include<iostream>


Node::Node() {
	next = NULL;
}

List::List() {
	
	head = NULL;
	size = 0;
	
}

void List::push_back(Worker& data) {
	if (head == NULL) {
		head = new Node;
		head->data = &data;
	}
	else {
		Node* cur = this->head;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = new Node;
		cur->next->data = &data;
	}
	size++;
}

void List::pop_front() {
	Node* cur = this->head;
	this->head = this->head->next;
	delete cur;
	size--;
}

List::~List() {
	while (size) {
		pop_front();
	}
}



void List::list_erase(int id) {
	Node* cur = this->head;
	Node* prev = this->head;
	Node* stop = this->head;
	while (cur->data->id != id) {
		prev = cur;
		cur = cur->next;
	}
	if (cur->data->id == head->data->id) {
		cur = cur->next;
		prev = head;
		head = cur;
		delete prev;
	}
	else {
		stop = cur;
		prev->next = cur->next;
		delete stop;
	}
	size--;
}

char* List::find_worker(int id) {
	Node* cur = this->head;
	while (cur->data->id != id) {
		cur = cur->next;
	}
	return cur->data->name;

}