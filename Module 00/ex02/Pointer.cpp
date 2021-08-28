#include "Pointer.hpp"

Pointer::Pointer(void) : value(0)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Pointer::~Pointer(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Pointer::foo(void) {
    std::cout << "Value is: " << this->value << std::endl;
    return ;
}