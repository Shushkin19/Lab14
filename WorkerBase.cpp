#include "WorkerBase.h"
//#include"LinkeList.h"
#include<iostream>
#include<ostream>

WorkerBase::WorkerBase() {
	size = 0;
	l = new List;
}

void WorkerBase::add(Worker& w) {
	l->push_back(w);
	size++;
}

void WorkerBase::erase(Worker& w) {
	l->list_erase(w.id);
	std::cout << w.name << " was fired\n";
	size--;
}

char* WorkerBase::find(Worker& w) {
	char* res = l->find_worker(w.id);
	return res;
}

int WorkerBase::calcTotalSalary() const {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		Worker& r = l->get(l, i);
		sum += r.getSalary();
	}
	std::cout << sum << std::endl;
	return sum;


}

Worker& WorkerBase::find(const char* name) {
	for (int i = 0; i < size; i++) {
		Worker& w = l->get(l, i);
		if (strcmp(name, w.name) == 0) {
			return w;

		}
	}
}

void WorkerBase::eraseWorker()  {
	int sum = 0;
	int min;
	Worker& q = l->get(l, 0);
	min = q.Rating();
	for (int i = 0; i < size; i++) {
		Worker& r = l->get(l, i);
		sum = r.Rating();
		if (sum <= min) {
			min = sum;
		}
	}
		for (int j = 0; j < size; j++) {
			Worker& e = l->get(l, j);
			if (e.Rating() == min) {
				l->list_erase(e.id);
				size--;
				break;
			}
		}



	
}

