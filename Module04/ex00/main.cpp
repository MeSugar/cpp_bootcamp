#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongAnimal.hpp"
#include "ClassWrongCat.hpp"


int main()
{
    std::cout << "------------Sane animals------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "------------Insane animals------------" << std::endl;
    const WrongAnimal* WrongMeta = new WrongAnimal();
    const WrongAnimal* WrongI = new WrongCat();
    WrongI->makeSound(); //will output the cat sound!
    WrongMeta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete WrongMeta;
    delete WrongI;
    return (0);
}