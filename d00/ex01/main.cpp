#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::string input;
    std::cin >> input;
    std::string stop_time = "EXIT";
    while (input.compare(stop_time) != 0)
    {
        std::cout << "OK" << std::endl;
        std::cin >> input;
        std::cout << input;
    }
    return (0);
}
