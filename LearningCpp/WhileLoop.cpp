/*
 * WhileLoop.cpp
 *
 *  Created on: Apr 20, 2016
 *      Author: alvin
 */

#include "WhileLoop.h"
#include <iostream>
using namespace std;

WhileLoop::WhileLoop() {
	// TODO Auto-generated constructor stub

}

WhileLoop::~WhileLoop() {
	// TODO Auto-generated destructor stub
}

int WhileLoop::gradCalc(){
	double midterm, final;

	cout << "Please enter your midterm grade: ";

	cin >> midterm;

	cout << "Please enter your final grade: ";

	cin >> final;

	cout << "Enter all your homework grades, "
			"followed by Ctl+d: "
			<< endl;

	int count = 0 ;
	double sum = 0;
	double x; // this variable will capture the homework grades
	while (cin >> x) {
		cout << "Count is " << count << endl;
		++count;
		cout << "x is " << x << endl;
		sum += x;
		cout << "sum is " << sum << endl;
	}
	// Print three significant digits.
	streamsize prec = cout.precision(3);
	cout << "your course grade is "
			<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
			<< endl;
	cout.precision(prec);
	return 0;
};
