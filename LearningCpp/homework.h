#pragma once
#include <vector>
using namespace std;
class homework
{


public:
	homework();
	void readHomework(vector<double>& assignments);
	double compute_median(vector<double> assignments);
	void computer_grade(double midterm, double final, double median);
	int studentGrades();

};


