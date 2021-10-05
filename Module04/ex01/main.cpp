#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"


int main()
{
    const Animal *zoo[8];
    const Animal* j = new Dog("This exercise sucks!");
    const Animal* i = new Cat("This exercise nuts!");

    delete j;
    delete i;
    for (int i = 0; i < 4; i++)
        zoo[i] = new Dog("This exercise sucks!");
    for (int i = 4; i < 8; i++)
        zoo[i] = new Cat("This exercise nuts!");
    for (int i = 0; i < 8; i++)
        delete zoo[i];
   
    Cat cat("Mr cat says: this exercise sucks!");
    Cat tmpCat = cat;
    tmpCat.setArray("Mr cat says: this exercise is nuts!");
    cat.printArray();
    tmpCat.printArray();

    Dog dog("The dog says: this exercise sucks!");
    Dog tmpDog = dog;
    tmpDog.setArray("The dog says: this exercise is nuts!");
    dog.printArray();
    tmpDog.printArray();
    return (0);
}