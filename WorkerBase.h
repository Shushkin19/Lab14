#pragma once
#include"Worker.h"
#include"LinkeList.h"
#include<ostream>
class WorkerBase {
private:
	int size;
	List* l;

public:
	WorkerBase();
	void add(Worker& w);
	//void Print();
	void erase(Worker& w);
	char* find(Worker& w);
	Worker& find(const char* name);
	~WorkerBase() {
		delete l;
	}
	void eraseWorker()  ;
	int calcTotalSalary() const;
	int SizeWorker() {
		return size;
	}
	Worker& get(int i) {
		Worker& w = l->get(l, i);
		return w;
	}
	friend std::ostream& operator<<(std::ostream& os, WorkerBase& wb);

	//расчет общего объема заработной платы в фирме
};



