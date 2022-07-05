#include"Lab14.h"
#include"Accountant.h"
#include"Programmer.h"
#include"SalesOfficer.h"
#include"WorkerBase.h"
#include"Director.h"
#include<iostream>

//using namespace std;



int main() {
	WorkerBase wb;
	Director d(wb);
	Accountant Ac1("Nastya", 350);
	Programmer Prog1("Ivan", 500, 2, 1.4, 0);
	SalesOfficer Off1("Petr", 10, 5, 50, "spb");
	Programmer Prog2("Kolya", 100, 1, 1.1, 0);
	Programmer Prog3("Petr", 900, 4, 1.9, 1);
	d.AddNewWorker(Ac1);
	d.AddNewWorker(Prog1);
	d.AddNewWorker(Off1);
	d.AddNewWorker(Prog2);
	d.AddNewWorker(Prog3);
	std::cout << wb;
	wb.calcTotalSalary();
	d.ChangeSalaryForProgrammer(Prog1, 100, 1, 1.1, 0);
	wb.calcTotalSalary();
	d.ChangeSalaryForAccountant(Ac1, 500);
	wb.calcTotalSalary();
	d.ChangeSalaryForSalesOfficer(Off1, 5, 5, 60);
	wb.calcTotalSalary();
	std::cout << "Bad Worker\n";
	d.DeleteBadWorker();
	wb.calcTotalSalary();
	d.DeleteWorker("Petr","Programmer");
	//std::cout << wb.find(Off1) << std::endl;
	//wb.erase(Off1);
	
	std::cout << "\n";
	wb.calcTotalSalary();
	std::cout << wb;
	return 0;
}
