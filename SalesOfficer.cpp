#include "SalesOfficer.h"
#include<iostream>


SalesOfficer::SalesOfficer(const char* name, int SoldProduct, int Commision, int Price, const char* Branch) : Worker(name,2) {
	this->SoldProduct = SoldProduct;
	this->Commision = (float)Commision / 100;
	this->Commision = Commision;
	this->Price = Price;
	int n = strlen(Branch) + 1;

	char* br = new char[n];
	strcpy_s(br, sizeof(name), Branch);

	this->Branch = new char[n];
	this->Branch = br;
}
