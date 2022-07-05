#pragma once
#include"Worker.h"

class SalesOfficer : public Worker {
	int SoldProduct;
	float Commision;
	int Price;
	char* Branch;
	int count = 0;

public:
	SalesOfficer(const char* name, int SoldProduct, int Commision, int Price, const char* Branch);
	virtual void ChangeSalary(int SoldProduct, int Commision, int Price) {
		this->Price = Price;
		this->SoldProduct = SoldProduct;
		this->Commision = Commision;
		count++;

	}

	virtual int Rating() const {
		int res = (SoldProduct + Price) * Commision;
		res /= count;
		return res;
	}
	virtual std::ostream& operator<<(std::ostream& os) {
		return os << "Profession => SalesOfficer\n" << "SoldProduct: " << SoldProduct
			<< "\nCommision: " << Commision << "\nPrice: " << Price << "\nBranch: " << Branch << std::endl;
	}
	// 	((% от продаж) * количество * цена).
	virtual int getSalary() const {
		int res = Commision * SoldProduct * Price;
		return res;
	}
};
