
#include "c_sample1.hpp"

Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
    /*
    this->a1 = p1;
    this->a2 = p2;
    this->a3 = p3;
    return;
    */ // not needed with init_list!
}

Sample1::~Sample1()
{
    return;
}
void Sample1::bar() const
{
    std::cout << "this function can't change the instance" << std::endl;
    //this->a1 = 42; will not compile
}
