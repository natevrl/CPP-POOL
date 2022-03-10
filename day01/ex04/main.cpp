#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int ac, char const *av[])
{
	string filestream, s1, s2, file, buf;

	if (ac != 4)
		return (cout << "needs 3 args" << endl, -1);
	filestream = av[1];
	s1 = av[2];
	s2 = av[3];
	ifstream readingStream(filestream);

	if (!readingStream.is_open()) 
		return (cerr << "open() error" << endl, -1);

	while (getline(readingStream, buf))
		file += buf + '\n';
	std::cout << file;
	cout << endl << file.find(s1) << endl;




	readingStream.close();


		// while(readingStream >> s1)
		// 	buf += s1 + '\n';
		// cout << buf;
		// readingStream.close();

		// std::ofstream writingStream(filestream + ".replace");
		// writingStream << "foo";
	return 0;
}
