/*
 * ForLoop.cpp
 *
 *  Created on: Apr 20, 2016
 *      Author: alvin
 */

#include "ForLoop.h"
#include <iostream>
using namespace std;

ForLoop::ForLoop() {
	// TODO Auto-generated constructor stub

}

int ForLoop::mytriange(){
	for(int r = 0; r != 5; ++r) {
		for(int c = 0; c != r + 1; ++c) {
			cout << "*";
		}
			cout << endl;
	}

	return 0;
}

