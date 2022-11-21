#include "SUV_C.h"

SUV_C::SUV_C() : Car_C() {
	tankCapacity = 0;
}

SUV_C::SUV_C(float tc, int nd, string mf, int yb) : Car_C(nd, mf, yb) {
	tankCapacity = tc;
}

float SUV_C::Get_TankCapacity() const {
	return tankCapacity;
}

void SUV_C::Set_TankCapacity(float tc) {
	tankCapacity = tc;
}

void SUV_C::Display_Info() {
	cout << endl << "SUV: ";
	cout << endl << "Manufacturer: " << Get_Manufacturer();
	cout << endl << "Year Built: " << Get_YearBuilt();
	cout << endl << "Number of Doors: " << Get_NumDoors();
	cout << endl << "Tank Capacity: " << tankCapacity;
}