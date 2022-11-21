/*Tyler LeBlanc
CIS 1202.201
VehicleInheritance
11/21/2022
*/

#include "SUV_C.h"
#include <iomanip>

int main() {

	cout << setprecision(2) << fixed;

	string manufacturer;
	int yearBuilt;
	int numDoors;
	float tankCapacity;
	
	cout << endl << "Enter the vehicle's manufacturer." << endl;
	getline(cin, manufacturer);
	
	cout << endl << "Enter the date the vehicle was built." << endl;
	cin >> yearBuilt;

	Vehicle_C vehicle(manufacturer, yearBuilt);
	vehicle.Display_Info();


	cout << endl << endl << "Enter the car's manufacturer." << endl;
	cin.ignore();
	getline(cin, manufacturer);

	cout << endl << "Enter the date the car was built." << endl;
	cin >> yearBuilt;

	cout << endl << "Enter the number of doors the car has." << endl;
	cin >> numDoors;

	Car_C car(numDoors, manufacturer, yearBuilt);
	car.Display_Info();


	cout << endl << endl << "Enter the SUV's manufacturer." << endl;
	cin.ignore();
	getline(cin, manufacturer);

	cout << endl << "Enter the date the SUV was built." << endl;
	cin >> yearBuilt;

	cout << endl << "Enter the number of doors the SUV has." << endl;
	cin >> numDoors;

	cout << endl << "Enter the SUV's tank capacity." << endl;
	cin >> tankCapacity;

	SUV_C suv(tankCapacity, numDoors, manufacturer, yearBuilt);
	suv.Display_Info();


	cout << endl << endl;
	system("pause");
	return 0;
}