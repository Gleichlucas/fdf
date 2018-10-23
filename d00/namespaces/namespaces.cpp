#include <iostream>
#include <stdio.h>

int g_nb = 10;

namespace Foo
{
    int g_nb = 1;
};
int main()
{
    std::cout << "Hi" << std::endl;
    printf("nb is %d und %d in Foo\n", g_nb, Foo::g_nb);
    return (0);
}
