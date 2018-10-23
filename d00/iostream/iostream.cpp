#include <iostream>


int main(void)
{
    char buff[512];

    std::cout << "Hey give me String boi!" << std::endl;
    std::cin >> buff; // stops filling the buffer after ascii 32
    std::cout << "You fucker why would you say: " << buff << "!" << std::endl;
    return 0;
}
