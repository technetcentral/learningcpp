/*

#include "homework.h"

#include <algorithm> // for sorting
#include <iostream>
#include <stdexcept>

homework::homework()
{
}

void homework::readHomework(vector<double>& assignments)
{
	double x;
	while (cin >> x)
	{
		assignments.push_back(x); // Adds a new element at the end of the vector, after its current last element.
	}
	if (assignments.size() == 0) {
		//cout << endl << "You need to enter at least one homework grade. Please try again";
		throw domain_error("need at least one homework"); // standard error function for passing an error messege through a program
	}

	//return 0.0;
}

double homework::compute_median(vector<double> assignments)
{
	sort(assignments.begin(), assignments.end()); // see vector.cpp for reference 
	int mid = assignments.size() / 2;
	double median;
	if (assignments.size() % 2 == 0)
		median = (assignments[mid - 1] + assignments[mid]) / 2;
	else
		median = assignments[mid];

	return median;
}

void homework::computer_grade(double midterm, double final, double median)
{
	streamsize prec = cout.precision(3);
	cout << "Your course grade is "
		<< 0.2 * midterm + 0.4 * final + 0.4 * median << endl;
	cout.precision(prec);
}

int homework::studentGrades() {
	
	double midterm, final;
	vector<double> assignments;
	cout << "Please enter your midterm grade: ";
	cin >> midterm;
	cout << "Please enter your final grade: ";
	cin >> final;
	cout << "Enter all your assignment grades, "
		"followed by Ctl+d: "
		<< endl;
	try {   // place the try catch around the code that will be impacted if readHomework function returns domain_error  
		readHomework(assignments);
		double median = compute_median(assignments);
		// create compute_grade function next: 
		computer_grade(midterm, final, median);
	}
	catch (const domain_error& d) {
		cout << d.what() << endl; 
	}
	
return		0;
}

*/
