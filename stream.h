#pragma once
#include<ostream>
#include"WorkerBase.h"


std::ostream& operator<<(std::ostream& os, WorkerBase& wb) {
	os << "\nWorker Base: \n";
	os << "----------------------------------------------\n\n";

	for (int i = 0; i < wb.size; i++) {
		Worker& w = wb.l->get(wb.l, i);
		//os << "----------------------------------------------\n";
		os << w.name << "\n";
		w << os;
		os << "\n";
		os << "----------------------------------------------\n\n";
	}

	 return os;
}
