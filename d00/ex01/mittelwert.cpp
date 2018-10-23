#include <iostream>
#include <stdlib.h>

int main (int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    int c = atoi(av[3]);
    float mw;
    int min;
    int max;
    if (a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    if (c > max)
        max = c;
    if (c < min)
        min = c;
    mw = ( a + b + c) / 3.0;
    std::cout << "min is " << min << " max is " << max  << " mw is " << mw;
    return (0);
}
