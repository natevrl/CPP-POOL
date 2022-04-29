#include "Filestream.hpp"

int main(int ac, char const *av[])
{
	std::string filestream;
	std::string s1, s2, file, buf, replace;
	size_t i;

	//handle args error
	if (ac != 4)
		return (std::cout << "needs 3 args" << std::endl, -1);

	// init args
	filestream = av[1];
	s1 = av[2];
	s2 = av[3];

	// open filestream and handle error
	// c_str() : if and ofstream need char*, recover the char* of the string object
	std::ifstream readingStream;
	readingStream.open(filestream.c_str());
	if (!readingStream.is_open()) 
		return (std::cerr << "open() error" << std::endl, -1);

	//copying line by line filestream to file variable
	while (getline(readingStream, buf))
		file += buf + '\n';

	// replace all s1 occurence on filestream by s2
	// npos = greatest possible value for an element of type size_t.
	// find = return first char of occurence s1
	buf.clear();
	while ((i = file.find(s1)) != std::string::npos)
	{
		buf = file.erase(i, s1.length()).insert(i, s2);
		// std::cout << buf << std::endl;
		// printf("%ld\n", i);
	}

	// writing the buffer on the new file : <filestream>.replace
	replace = ".replace";
	std::ofstream writingStream(filestream.append(".replace").c_str());
	writingStream << buf;

	readingStream.close();
	writingStream.close();
	return 0;
}
