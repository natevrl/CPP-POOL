#include <string>
#include <cstdio>
#include <iostream>

using namespace std;



int main( void )
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "str address : " << &str << endl << endl;
	cout << "PTR address : " << stringPTR << endl << endl;
	cout << "REFERENCE address : " << &stringREF << endl << endl;

	cout << "str value : " << str << endl << endl;
	cout << "ptr value with dereferencment : " << *stringPTR << endl << endl;
	cout << "reference value : " << stringREF << endl;

	return 0;
}

