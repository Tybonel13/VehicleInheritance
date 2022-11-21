#include "Vehicle_C.h"

Vehicle_C::Vehicle_C() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string mf, int yb) {
	manufacturer = mf;
	yearBuilt = yb;
}

string Vehicle_C::Get_Manufacturer() const {
	return manufacturer;
}

int Vehicle_C::Get_YearBuilt() const {
	return yearBuilt;
}

void Vehicle_C::Set_Manufacturer(string mf) {
	manufacturer = mf;
}

void Vehicle_C::Set_YearBuilt(int yb) {
	yearBuilt = yb;
}

void Vehicle_C::Display_Info() {
	cout << endl << "Vehicle: ";
	cout << endl << "Manufacturer: " << manufacturer;
	cout << endl << "Year Built: " << yearBuilt;
}