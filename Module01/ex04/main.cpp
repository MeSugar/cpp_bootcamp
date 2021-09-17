#include <iostream>
#include <fstream>

int ft_print_error(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

std::string	ft_get_string(std::ifstream &ifs)
{
	std::string buf;
	char c;

	while (ifs.good())
	{
		ifs.get(c);
		buf += c;
	}
	return (buf);
}

void ft_replace(std::string &buf, std::string s1, std::string s2)
{
	std::size_t pos;
	
	pos = buf.find(s1);
	while (pos != std::string::npos)
	{
		buf.erase(pos, s1.size());
		buf.insert(pos, s2);
		pos = buf.find(s1);
	}
}

int main(int ac, char **av)
{
	std::string buf;

	if (ac != 4)
		return (ft_print_error("Error : wrong number of arguments"));
	if (!av[1][0] || !av[2][0] || !av[3][0])
		return (ft_print_error("Error : arguments connot be empty strings"));
	std::ifstream ifs(av[1]);
	std::ofstream ofs("output.replace");
	if (!ifs.is_open() || !ofs.is_open())
		return(ft_print_error("Error : connot open file"));
	buf = ft_get_string(ifs);
	ft_replace(buf, av[2], av[3]);
	ofs << buf;
	ifs.close();
	ofs.close();
	
	return (0);
}