#ifndef SUV_C_H
#define SUV_C_H

#include "Car_C.h"

class SUV_C : public Car_C {

private:
	float tankCapacity;

public:
	SUV_C();
	SUV_C(float, int, string, int);

	float Get_TankCapacity() const;

	void Set_TankCapacity(float);

	void Display_Info();
};
#endif
