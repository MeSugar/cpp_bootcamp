#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen Karen;

    if (ac == 2)
        Karen.complain(av[1]);
    else
        std::cout << "Error : wrong number of arguments" << std::endl;
    return(0);
}