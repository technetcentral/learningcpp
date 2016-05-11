#include "circle.h"

#include <iostream>

using namespace std;

float area_of_circle(float radius) {
	return 3.14159 * radius * radius;
}

circle::circle()
{
	float radius;
	cout << "Please enter a radius: ";
	cin >> radius;
	cout << "the area of this circle is "
		<< area_of_circle(radius) << endl;
}


circle::~circle()
{
}
