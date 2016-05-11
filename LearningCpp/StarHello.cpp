/*
 * StarHello.cpp
 *
 *  Created on: Apr 19, 2016
 *      Author: alvin
 */
#include "StarHello.h"
#include <iostream>
#include <string>

using namespace std;

StarHello::StarHello() {

cout << "Please enter you name: ";
string name;
cin >> name;

string greeting = "Hello, " + name + "!";
string spaces(greeting.size(), ' ');
string stars(greeting.size(), '*');

cout << "*" << stars << "*" << endl
	 << "*"	<< spaces << "*"<< endl
	 <<	"*"	<<	greeting <<"*"<< endl
	 << "*"	<<	spaces	<< "*" << endl
	 << "*"	<<	stars	<<	"*" << endl;

}

StarHello::~StarHello() {
	// TODO Auto-generated destructor stub
}

