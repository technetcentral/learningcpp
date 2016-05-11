#pragma once
#include <iostream>
#include <string>

class reverseString
{
public:
	reverseString();
	
	~reverseString();

	std::string getString();
	
	std::string myReverseString(std::string x);

	bool palindrom(std::string t);
};

