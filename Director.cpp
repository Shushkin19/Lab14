#include "Director.h"
#include<iostream>
void Director::ChangeSalaryForProgrammer(Worker& w,int WR, int expr, float skl, bool prm) {
	w.ChangeSalary(WR, expr,  skl,  prm);

}
void Director::ChangeSalaryForAccountant(Worker& w, int Salary) {
	w.ChangeSalary(Salary);
}
void Director::ChangeSalaryForSalesOfficer(Worker& w, int SoldProduct, int Commision, int Price) {
	w.ChangeSalary( SoldProduct,  Commision,  Price);
}
void Director::AddNewWorker(Worker& w) {
	 
	wb->add(w);
}

void Director::DeleteWorker(const char* nam,const char* pr) {
	//Worker& w = wb->find(nam);
	int size = strlen(nam) + 4;
	char* name = new char[size];
	int profid;
	strcpy_s(name, sizeof(name), nam);
	if (pr[0] == 80) {
		profid = 3;

	}
	else if (pr[0] == 65) {
		profid = 1;
	}
	else {
		profid = 2;
	}
	int sz = wb->SizeWorker();
	for (int i = 0; i <sz; i++) {
		Worker& w = wb->get(i);
		if (strcmp(w.name,nam) == 0) {
			if (w.profid == profid) {
				wb->erase(w);
				break;
			}
		}
	}

	if (sz == wb->SizeWorker()) {
		std::cout << "\nWorker: "<<nam<<" does not exist in this profession\n";
	}
	
	
}

void Director::DeleteBadWorker() {
	wb->eraseWorker();
}
