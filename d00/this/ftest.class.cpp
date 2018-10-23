#include "second.hpp"

ftest::ftest( void ) {

    std::cout << "Constructor called" << std::endl;

    this->foo = 42;
    std::cout << "this->foo is " << this->foo << std::endl;

    this->bar();

    return;
}

ftest::~ftest( void ){

    std::cout << "Destructor called" << std::endl;
    return;
}

void ftest::bar (void)
{
    std::cout << "Memberfunc bar called" << std::endl;
    return;
}
