#pragma once
#include"WorkerBase.h"

class Director {
	WorkerBase* wb;

public:
	Director(WorkerBase& w) {
		this->wb = &w;
	}
	void ChangeSalaryForProgrammer(Worker& w,int WR, int expr, float skl, bool prm);
	void ChangeSalaryForAccountant(Worker& w, int Salary);
	void ChangeSalaryForSalesOfficer(Worker& w, int SoldProduct, int Commision, int Price);
	void DeleteWorker(const char* name, const char* pr);
	void DeleteBadWorker();
	void AddNewWorker(Worker& w);
};

