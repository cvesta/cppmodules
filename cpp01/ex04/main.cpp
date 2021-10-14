#include <iostream>
#include <fstream>

int err(std::string name)
{
	std::cout << "error -> " << name << std::endl;
	return (0);
}

std::string copying(std::string line, std::string s1, std:: string s2, size_t
pos)
{
	int s1len = s1.size();

	pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1len);
		line.insert(pos, s2);
		pos = line.find(s1, pos);
	}
	return (line);
}

int main(int argc, char **argv)
{
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::string		fileName;
	std::ifstream	fin;
	std::ofstream	fout;
	size_t		pos = 0;

	if (argc != 4)
	{
		err("incorrect number of arguments");
		return (0);
	}
	fin.open(argv[1]);
	if(!fin)
	{
		err("has not been opened :(");
		return (0);
	}
	fileName.append(argv[1]).append(".replace");
	fout.open(fileName);
	if (!fout)
	{
		err("has not been opened :(");
		return (0);
	}
	while (!fin.eof())
	{
		getline(fin, line);
		line = copying(line, argv[2], argv[3], pos);
		fout << line;
		if(!fin.eof())
			fout << std::endl;
	}
	fin.close();
	fout.close();
	std::cout << "success" << std::endl;
	return (0);
}