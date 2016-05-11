#include "vectors.h"
#include <iostream>
#include <algorithm> // for sorting
#include <vector>

using namespace std;


vectors::vectors()
{
}


vectors::~vectors()
{
}

int vectors::studentGrades() {
	double midterm, final;

	cout << "Please enter your midterm grade: ";

	cin >> midterm;

	cout << "Please enter your final grade: ";

	cin >> final;

	cout << "Enter all your homework grades, "
		"followed by Ctl+d: "
		<< endl;
	double x;
	vector<double> homework;  // vector is a class that is in the c++ standard library, it is included in the header section of this file: 
	/*
	Vectors are sequence containers representing arrays that can change in size. 
	Just like arrays, vectors use contiguous storage locations for their elements, 
	which means that their elements can also be accessed using offsets on regular pointers to its elements, 
	and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, 
	with their storage being handled automatically by the container.
	*/
	while (cin >> x)
	{
		homework.push_back(x); // Adds a new element at the end of the vector, after its current last element.
	}
	if (homework.size() == 0) {
		cout << endl << "You need to enter at least one homework grade. Please try again";
		return 1; //signal error
	}
	sort(homework.begin(), homework.end()); // sort comes from the algorythm library, includes a bunch of code that you dont have to write yourself
	/*
	std::sort() Sorts the elements in the range [first,last) into ascending order.
	vector:: begin() Returns an iterator pointing to the first element in the vector. 
	vector::end() Returns an iterator referring to the past-the-end element in the vector container. The past-the-end element is the theoretical element 
	that would follow the last element in the vector. It does not point to any element, and thus shall not be dereferenced. Because the 
	ranges used by functions of the standard library do not include the element pointed by their closing iterator, this function is often 
	used in combination with vector::begin to specify a range including all the elements in the container. If the container is empty, this 
	function returns the same as vector::begin.
	*/

	int mid = homework.size() / 2;
	double median;
	if (homework.size() % 2 == 0)
		median = (homework[mid - 1] + homework[mid]) / 2;
	else
		median = homework[mid];
	streamsize prec = cout.precision(3);
	cout << "Your course grade is "
		<< 0.2 * midterm + 0.4 * final + 0.4 * median << endl;
	cout.precision(prec);
	return 0;
}
