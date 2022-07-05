#pragma once
#define Bonus 1000
#include<ostream>
class Worker {
public:
	char* name;
	int id;
	int profid;
public:
	Worker(const char* n, int t);
	~Worker() {
		
		delete[] name;
	}
	virtual int Rating() const { return 0; };
	//friend  std::ostream& operator<<(std::ostream& os, Worker& w) { return os<<w.name; };
	virtual std::ostream& operator<<(std::ostream& os) {
		return os << name;
	}
	//virtual Worker& getter(std::ostream& os) const { return ; };
	virtual void ChangeSalary(int WR, int expr, float skl, bool prm) {};
	virtual void ChangeSalary(int SoldProduct, int Commision, int Price) {};
	virtual void ChangeSalary(int Salary) {};
	virtual int getSalary() const { return 0; };
};

