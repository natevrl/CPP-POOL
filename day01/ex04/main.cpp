#include "Filestream.hpp"

int main(int ac, char const *av[])
{
	string filestream;
	string s1, s2, file, buf, replace;
	size_t i;

	//handle args error
	if (ac != 4)
		return (cout << "needs 3 args" << endl, -1);

	// init args
	filestream = av[1];
	s1 = av[2];
	s2 = av[3];

	// open filestream and handle error
	std::ifstream readingStream;
	readingStream.open(filestream.c_str());
	if (!readingStream.is_open()) 
		return (cerr << "open() error" << endl, -1);

	//copying line by line filestream to file variable
	while (getline(readingStream, buf))
		file += buf + '\n';

	//replace all s1 occurence on filestream by s2
	buf.clear();
	while ((i = file.find(s1)) != string::npos)
		buf = file.erase(i, s1.length()).insert(i, s2);

	// writing the buffer on the new file : <filestream>.replace
	replace = ".replace";
	ofstream writingStream(filestream.append(".replace").c_str());
	writingStream << buf;

	readingStream.close();
	writingStream.close();
	return 0;
}
