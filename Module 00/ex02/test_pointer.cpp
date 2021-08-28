#include "Pointer.hpp"

int main()
{
    Pointer inst;
    Pointer *instp;

    instp = &inst;
    int Pointer::*p = &Pointer::value;
    std::cout << "Inst value: " << inst.value << std::endl;
    inst.*p = 21;
    std::cout << "Inst value: " << inst.value << std::endl;
    instp->*p = 42;
    std::cout << "Inst value: " << inst.value << std::endl;

    void (Pointer::*f)(void) = &Pointer::foo;
    (inst.*f)();
    (instp->*f)();

}