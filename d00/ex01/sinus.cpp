#include <iostream>
#include <math.h>

int main(void)
{
    float Anfang;
    float Ende;
    std::cout << "gib anfang digger! ";
    std::cin >> Anfang;
    Anfang = ceil(Anfang);
    std::cout << "gib ende digger! ";
    std::cin >> Ende;
    Ende = ceil(Ende);
    float i = Anfang;
    float j = (Ende - Anfang) / 10.0;
    std::cout << "j is " << j << std::endl;
    while (i <= Ende)
    {
        std::cout << sin(i / 10 * 2 * M_PI / 360) << std::endl;
        i = i + j;
    }

    /*for (int i = 0; i <= 90; i = i + 10)
    {
        std::cout << sin(i * 2 * M_PI / 360) << " ";
    }
    */
    return (0);
}
