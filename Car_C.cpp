#include "Car_C.h"

Car_C::Car_C() : Vehicle_C() {
	numDoors = 0;
}

Car_C::Car_C(int nd, string mf, int yb) : Vehicle_C(mf, yb) {
	numDoors = nd;
}

int Car_C::Get_NumDoors() const {
	return numDoors;
}

void Car_C::Set_NumDoors(int nd) {
	numDoors = nd;
}

void Car_C::Display_Info() {
	cout << endl << "Car: ";
	cout << endl << "Manufacturer: " << Get_Manufacturer();
	cout << endl << "Year Built: " << Get_YearBuilt();
	cout << endl << "Number of Doors: " << numDoors;
}