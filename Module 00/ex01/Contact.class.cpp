#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void Contact::collect_data(int number)
{
    int i;

    this->_index = number;
    for (i = 0; i < 5; i++)
    {
	    std::cout << this->_field_names[i] << ": ";
	    std::getline(std::cin, this->_data[i]);
    } 
    // std::cout << "Index: " << this->index << std::endl;
    // for (i = 0; i < 5; i++)
    // {
    //     std::cout << this->data[i] << std::endl;
    // }
}