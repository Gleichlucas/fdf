#include "c_sample1.hpp"

int main(void)
{
    Sample1 test(129, 12, 4.5);
    std::cout << "Die 3 Attribute von test sind: " << test.a1  << " "<< test.a2 << " " << test.a3 << std::endl;
    test.bar();
    return 0;
}
