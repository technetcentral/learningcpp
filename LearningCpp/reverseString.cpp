#include "reverseString.h"
using namespace std;

reverseString::reverseString()
{	
	cout << "If you type in a word, I'll tell you if it is a palindrom." << endl;
	string stringin;
	cin >> stringin;
	palindrom(stringin);
}


reverseString::~reverseString()
{
}


string reverseString::myReverseString(string x)
{
	string b;
	for (string::reverse_iterator r = x.rbegin(); r != x.rend(); r++)
		b.push_back(*r);
	return b;
}

string reverseString::getString()
{
	cout << "If you type in a word, I'll tell you if it is a palindrom." << endl;
	string stringin;
	cin >> stringin;
	return stringin;
}

bool reverseString::palindrom(string t)
{
	string t_rev = myReverseString(t);
	if (t == t_rev)
		cout << "Yes, " << t << " is a palindrome." << endl;
	else
		cout << "No, " << t << " is not a palindrom." << endl;

	return false;
}
