#include "ClassAMateria.hpp"
#include "ClassIce.hpp"
#include "ClassCharacter.hpp"


int main()
{
    Ice a;
    Ice g;

    std::cout << a.getType() << std::endl;
    AMateria *b = a.clone();
    std::cout << b->getType() << std::endl;
    Character aa("god");

    std::cout << aa.getName() << std::endl;
    Character bb(aa);
    std::cout << bb.getName() << std::endl;
    aa.setName("sod");
    bb.setName("bod");
    std::cout << aa.getName() << std::endl;
    std::cout << bb.getName() << std::endl;
    bb = aa;
    std::cout << bb.getName() << std::endl;
    delete b;
    return (0);
}