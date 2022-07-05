#pragma once
#include"Worker.h"

class Accountant : public Worker {
protected:
	int Salary ;
	int count = 0;

public:
	Accountant(const char* name, const int Salary) : Worker(name,1) {
		this->Salary = Salary;
		count++;

	}
	
	// friend std::ostream& operator<<(std::ostream& os,Accountant& a)  {
	//	return os << "Salary Accountant:" << a.Salary << std::endl;
	// }

	virtual std::ostream& operator<<(std::ostream& os) {
		return os<<"Profession => Accontant\n" << "Salary Accountant : " << Salary << std::endl;
	 }

	virtual int Rating() const {
		int res = Salary*50 / count;
		return res;
	}

	virtual void ChangeSalary(int Salary) {
		this->Salary = Salary;
	}
	virtual int getSalary() const {
		int res = this->Salary + Bonus; /// Добавить бонус
		return res;
	}
};

