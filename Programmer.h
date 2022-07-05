#pragma once
#include "Worker.h"

class Programmer : public Worker {
protected:
	int WageRate;
	int Experience;
	float Skill;
	bool isbonus;
	int count = 0;

public:
	Programmer(const char* name, int WR, int expr, float skl, bool prm) : Worker(name,3) {
		this->WageRate = WR;
		this->Experience = expr;
		this->Skill = skl;
		this->isbonus = prm;
		count++;

		
	};

	virtual std::ostream& operator<<(std::ostream& os) {
		return os << "Profession => Programmer\n" << "Wage Rate: " << WageRate << "\nExperience: "
			<< Experience << "\nSkill: " << Skill << std::endl;
	}

	//friend std::ostream& operator<<(std::ostream& os, Programmer& p);

	virtual int Rating() const {
		int ret = isbonus ? WageRate + Skill + Bonus : WageRate + Skill;
		return ret/=count;
	}

	virtual void ChangeSalary(int WR, int expr, float skl, bool prm)  {
		this->WageRate = WR;
		this->Experience = expr;
		this->Skill = skl;
		this->isbonus = prm;
	}

	//(ставка + квалификация*1000$ + премия за проект)
	virtual int getSalary() const {
		int res = isbonus ? WageRate + Skill * 1000 + Bonus : WageRate + Skill * 1000; /// Добавит бонус
		return res;
	}
};

