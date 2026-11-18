#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double kineticEnergy(double mass, double velocity) {
	return 0.5 * mass * velocity * velocity;
}

int main()
{
	double mass;
	double velocity;

	cout << "Enter the mass of the object (in kilograms): ";
	cin >> mass;
	cout << "Enter the velocity of the object (in meters per second): ";
	cin >> velocity;

	cout << "The kinetic energy of the object is: " << kineticEnergy(mass, velocity) << " joules." << endl;
}

