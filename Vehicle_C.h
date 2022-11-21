#ifndef Vehicle_C_H
#define Vehicle_C_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle_C {

private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	string Get_Manufacturer() const;
	int Get_YearBuilt() const;

	void Set_Manufacturer(string);
	void Set_YearBuilt(int);

	void Display_Info();
};
#endif