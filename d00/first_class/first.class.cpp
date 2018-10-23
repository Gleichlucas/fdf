#include "first.class.hpp"

first::first( void )
{
    std::cout << "Constructor called" << std::endl;
    return;
}

first::~first( void )
{
    std::cout << "Destructor called" << std::endl;
}

void first::bar( void ) {
    std::cout << "bar function called" << std::endl;
}
