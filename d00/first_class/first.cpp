#include "first.class.hpp"

int main()
{
    first test;

    test.foo = 42;
    std::cout << "test.foo is " << test.foo << std::endl;
    test.bar();

    return (0);
}
