#ifndef Car_C_H
#define Car_C_H

#include "Vehicle_C.h"

class Car_C : public Vehicle_C {

private:
	int numDoors;

public:
	Car_C();
	Car_C(int, string, int);

	int Get_NumDoors() const;

	void Set_NumDoors(int);

	void Display_Info();
};
#endif